note
	description	: "Classe contenant les caractérisitques d'un bouton dans le jeu."
    auteur      : "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	BUTTON

inherit
	GAME_SURFACE
	rename
		make as make_Game_Surface
	end
create
	make

feature {NONE} -- Initialisation

	make(nom_image:STRING)
		local
			l_image: IMG_IMAGE_FILE
		do
			create l_image.make (nom_image+".png")
			if l_image.is_openable then
				l_image.open
				if l_image.is_open then
					make_from_image (l_image)
				else
					has_error := True
					make_Game_Surface(1,1)
				end
			else
				has_error := True
				make_Game_Surface(1,1)
			end
		end
note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
