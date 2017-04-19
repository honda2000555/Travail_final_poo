note
    description : "Un jeu fait en Eiffel.%
    			%Classe servant à initialiser l'engin."
    auteur      : "Charles Magnan et David Larouche"
    generator   : "Eiffel Game2 Project Wizard"
    date        : "2017-21-03 3:30"
    revision    : "0.2"

class
    APPLICATION

inherit
	GAME_LIBRARY_SHARED
	IMG_LIBRARY_SHARED
	AUDIO_LIBRARY_SHARED

create
    make

feature {NONE} -- Initialisation

    make
            -- Lance l'engin.
    	local
    		l_engine:ENGINE
    		
        do
        	game_library.enable_video
        	image_file_library.enable_image (true, false, false)
        	audio_library.enable_sound
        	create l_engine.make
			if not l_engine.has_error then
				l_engine.run
			end
        end

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"

end
