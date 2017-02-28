note
    description : "A game created in Eiffel."
    author      : ""
    generator   : "Eiffel Game2 Project Wizard"
    date        : "2017-02-15 08:18:55.067 +0000"
    revision    : "0.1"

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

end
