note
    description	: "Classe contenant les caractéristiques du fond d'écran du jeu."
	author		: "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	BACKGROUND

inherit
	GAME_SURFACE
		redefine
			default_create
		end

create
	default_create

feature {NONE} -- Initialisation

	default_create
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make ("menu_background.png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
				else
					has_error := True
					make(1,1)
				end
			else
				has_error := True
				make(1,1)
			end
		end
note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
