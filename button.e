note
	description: "Bouton dans le jeu."
    author      : "Charles Magnan"
    date        : "2017-03-01 4:05"
    revision    : "0.1"

class
	BUTTON

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
			create l_image.make ("jouer.png")
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
end