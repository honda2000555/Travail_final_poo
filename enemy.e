note
	description	: "Classe contenant les caractéristiques d'un ennemie."
    author      : "David Larouche"
    date        : "2017-04-11 3:30"
    revision    : "0.1"
class
	ENEMY

--inherit
--	GAME_LIBRARY_SHARED
--	DRAWABLE
--	MOVABLE
--	TRAITS

--create
--	make

--feature {NONE} -- Initialisation

--	make (a_x, a_y, a_health, a_damage, a_shooting_speed:INTEGER)
--			-- Initialisation de «Current»
--		do
--			x := a_x
--			y := a_y
--			health := a_health
--			damage := a_damage
--			shooting_speed := a_shooting_speed
--		end

--feature -- Modifications

--	go_up(a_timestamp:NATURAL_32)
--			-- Fait `Current' aller en haut
--		do
--			old_timestamp := a_timestamp
--			going_up := True
--		end

--	go_down(a_timestamp:NATURAL_32)
--			-- Fait `Current' aller en bas
--		do
--			old_timestamp := a_timestamp
--			going_down := True
--		end

--	go_left(a_timestamp:NATURAL_32)
--			-- Fait `Current' aller a gauche
--		do
--			old_timestamp := a_timestamp
--			going_left := True
--		end

--	go_right(a_timestamp:NATURAL_32)
--			-- Fait `Current' aller a droite
--		do
--			old_timestamp := a_timestamp
--			going_right := True
--		end

--	stop_up
--			-- Fait `Current' arreter d'aller en haut
--		do
--			going_up := False
--			if not going_down and going_left and going_right then
--				sub_image_x := animation_coordinates.first.x
--				sub_image_y := animation_coordinates.first.y
--			end
--		end

--	stop_down
--			-- Fait `Current' arreter d'aller en bas
--		do
--			going_down := False
--			if not going_up and going_left and going_right then
--				sub_image_x := animation_coordinates.first.x
--				sub_image_y := animation_coordinates.first.y
--			end
--		end

--	stop_left
--			-- Fait `Current' arreter d'aller a gauche
--		do
--			going_left := False
--			if not going_up and going_down and going_left then
--				sub_image_x := animation_coordinates.first.x
--				sub_image_y := animation_coordinates.first.y
--			end
--		end

--	stop_right
--			-- Fait `Current' arreter d'aller a droite
--		do
--			going_right := False
--			if not going_up and going_down and going_left then
--				sub_image_x := animation_coordinates.first.x
--				sub_image_y := animation_coordinates.first.y
--			end
--		end

end
