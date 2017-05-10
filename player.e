note
	description	: "Classe contenant les caractéristiques du joueur."
    auteur      : "David Larouche"
    date        : "2017-04-11 3:30"
    revision    : "0.3"
class
	PLAYER

inherit
	GAME_LIBRARY_SHARED
	DRAWABLE
	MOVABLE
	-- TRAITS

create
	make

feature {NONE} -- Initialisation

	make (a_x, a_y :INTEGER_32)
			-- Initialisation de «Current»
		require
			x_positif: x>=0
			y_positif: y>=0
		local
			l_image:IMG_IMAGE_FILE
		do
			x := a_x
			y := a_y
			has_error := False
			create l_image.make ("gaben.png") -- Image temporaire
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					create right_surface.make_from_image (l_image)
					create {GAME_SURFACE_ROTATE_ZOOM} left_surface.make_zoom_x_y (right_surface, -1, 1, True)
					sub_image_width := right_surface.width // 3
					sub_image_height := right_surface.height
				else
					has_error := False
					create right_surface.make(1,1)
					left_surface := right_surface
				end
			else
				has_error := False
				create right_surface.make(1,1)
				left_surface := right_surface
			end
			surface := right_surface
			initialize_animation_coordinate
		end

	initialize_animation_coordinate
			-- Creer l'«animation_coordinates»
		do
			create {ARRAYED_LIST[TUPLE[x,y:INTEGER]]} animation_coordinates.make(4)
			animation_coordinates.extend ([surface.width // 3, 0])
			animation_coordinates.extend ([0, 0])
			animation_coordinates.extend ([(surface.width // 3) * 2, 0])
			animation_coordinates.extend ([0, 0])
		end

feature -- Accès

	has_error:BOOLEAN
			-- Si'l y a une erreur lors de l'initialisation de la surface

	update(a_timestamp:NATURAL_32)
			-- Met la surface a jour dependement de son «a_timestamp»
			-- Chaque 100 ms, l'image change; chaque 10ms «Current» est en mouvement.
		local
			l_coordinate:TUPLE[x,y:INTEGER]
			l_delta_time:NATURAL_32
		do
			if going_left or going_right then
				l_coordinate := animation_coordinates.at ((((a_timestamp // animation_delta) \\
												animation_coordinates.count.to_natural_32) + 1).to_integer_32)
				sub_image_x := l_coordinate.x
				sub_image_y := l_coordinate.y
				l_delta_time := a_timestamp - old_timestamp
				if l_delta_time // movement_delta > 0 then
					if going_right then
						surface := right_surface
						x := x + (l_delta_time // movement_delta).to_integer_32
					else
						surface := left_surface
						x := x - (l_delta_time // movement_delta).to_integer_32
					end
					old_timestamp := old_timestamp + (l_delta_time // movement_delta) * movement_delta
				end
			end
		end

	sub_image_x, sub_image_y:INTEGER
			-- Position of the portion of image to show inside `surface'

	sub_image_width, sub_image_height:INTEGER
			-- Dimension of the portion of image to show inside `surface'

	surface:GAME_SURFACE
			-- The surface to use when drawing `Current'

feature -- Modifications

	go_up(a_timestamp:NATURAL_32)
			-- Fait `Current' aller en haut
		do
			old_timestamp := a_timestamp
			going_up := True
		end

	go_down(a_timestamp:NATURAL_32)
			-- Fait `Current' aller en bas
		do
			old_timestamp := a_timestamp
			going_down := True
		end

	go_left(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a gauche
		do
			old_timestamp := a_timestamp
			if going_right  then
				stop_right
			end
			going_left := True
		end

	go_right(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a droite
		do
			old_timestamp := a_timestamp
			if going_left  then
				stop_left
			end
			going_right := True
		end

	stop_up
			-- Fait `Current' arreter d'aller en haut
		do
			going_up := False
			if not going_down and going_left and going_right then
				sub_image_x := animation_coordinates.first.x
				sub_image_y := animation_coordinates.first.y
			end
		end

	stop_down
			-- Fait `Current' arreter d'aller en bas
		do
			going_down := False
			if not going_up and going_left and going_right then
				sub_image_x := animation_coordinates.first.x
				sub_image_y := animation_coordinates.first.y
			end
		end

	stop_left
			-- Fait `Current' arreter d'aller a gauche
		do
			going_left := False
			if not going_up and going_down and going_left then
				sub_image_x := animation_coordinates.first.x
				sub_image_y := animation_coordinates.first.y
			end
		end

	stop_right
			-- Fait `Current' arreter d'aller a droite
		do
			going_right := False
			if not going_up and going_down and going_left then
				sub_image_x := animation_coordinates.first.x
				sub_image_y := animation_coordinates.first.y
			end
		end

invariant

note
    copyright: "Copyright (c) 2017, David Larouche "
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
