note
	description: "An example of sprite animation and movement using surfaces"
	author: "Charles Magnan"
	date: "Tue, 28 Fev 2017 09:37:29 +0000"
	revision: "1.0"

class
	ENGINE

inherit
	GAME_LIBRARY_SHARED		-- Pour utiliser «game_library»
	AUDIO_LIBRARY_SHARED	-- Pour utiliser «audio_library»

create
	make

feature {NONE} -- Initialisation

	make
			-- Initialisation de «Current»
		local
			l_window_builder:GAME_WINDOW_SURFACED_BUILDER
		do
			create_sound
			create desert
			create player
			create l_window_builder
			l_window_builder.set_title ("Example Animation")
			if not desert.has_error then
				l_window_builder.set_dimension (1500, 800)
			end
			window := l_window_builder.generate_window
			has_error := false
		end

feature -- Acces

	run
			-- Creer les ressources et lancer le jeu
		do
			player.y := 375
			player.x := 200
			game_library.quit_signal_actions.extend (agent on_quit)
			window.key_pressed_actions.extend (agent on_key_pressed)
			window.key_released_actions.extend (agent on_key_released)
			game_library.iteration_actions.extend (agent on_iteration)
			window.key_pressed_actions.extend (agent on_key_down_sound)
			music_source.play
			game_library.launch
		end

	has_error:BOOLEAN
			-- «True» si une erreure se produit durant la creation de «Current»

	desert:BACKGROUND
			-- Le fond d'ecran

	player:PLAYER
			-- Le joueur

	window:GAME_WINDOW_SURFACED
			-- La fenetre de jeu

	sound_source:AUDIO_SOURCE
			-- La source pour jouer son "on key press"

	music_source:AUDIO_SOURCE
			-- La source pour jouer la musique

	sound:AUDIO_SOUND
			-- Le son


feature {NONE} -- Implementation

	create_sound
			-- Prepare sounds and sound sources
		local
			l_music_loop:AUDIO_SOUND_FILE
		do
			create {AUDIO_SOUND_FILE}sound.make ("pew.wav")			-- This sound will be played when the user press the space bar.
			create l_music_loop.make ("loop.flac")		-- This sound will be loop until the application stop.
														-- The library can use every sound file format that the libsndfile library can use (see: http://www.mega-nerd.com/libsndfile)
			audio_library.sources_add
			music_source:=audio_library.last_source_added	-- The first source will be use for playing the music
			audio_library.sources_add
			sound_source:=audio_library.last_source_added	-- The second source will be use for playing the space sound
			if sound.is_openable and l_music_loop.is_openable then
				sound.open
				l_music_loop.open
				if sound.is_open and l_music_loop.is_open then
					music_source.queue_sound_infinite_loop (l_music_loop)	-- After the intro end, loop the music loop
				else
					has_error := True
				end
			else
				has_error := True
			end

		end

	on_iteration(a_timestamp:NATURAL_32)
			-- Evenement lance a chaque iteration
		do
			player.update (a_timestamp)	-- met a jour les animations et la position du joueur
			-- Pour que le joueur reste dans la fenetre
			if player.x < 0 then
				player.x := 0
			elseif player.x + player.sub_image_width > desert.width then
				player.x := desert.width - player.sub_image_width
			end

			-- Dessine la scene
			window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, desert.width, desert.height)
			window.surface.draw_surface (desert, 0, 0)
			window.surface.draw_sub_surface (
									player.surface, player.sub_image_x, player.sub_image_y,
									player.sub_image_width, player.sub_image_height, player.x, player.y
								)

			-- Lance la mise a jour de la fenetre et du son
			window.update
			audio_library.update
		end


	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE)
			-- Action lorsqu'une touch du clavier est actionnee
		do
			if not a_key_state.is_repeat then		-- Etre certain que la touche n'est pas une repetition
				if a_key_state.is_right then
					player.go_right(a_timestamp)
				elseif a_key_state.is_left then
					player.go_left(a_timestamp)
				end
			end

		end

	on_key_released(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE)
			-- Action when a keyboard key has been released
		do
			if not a_key_state.is_repeat then		-- I don't know if a key release can repeat, but you never know...
				if a_key_state.is_right then
					player.stop_right
				elseif a_key_state.is_left then
					player.stop_left
				end
			end
		end

	on_key_down_sound(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE)
			-- When the space button is pressed (in `a_key_state'), play `sount' in `sound_source'
		do
			if a_key_state.is_space and sound.is_open then			-- If the space key as been pressed, play the space sound
				if sound_source.is_playing then
					sound_source.stop					-- Be sure that the queue buffer is empty on the sound_source object (when stop, the source queue is clear)
					sound.restart						-- Be sure that the sound is at the beginning
				end

				sound_source.queue_sound (sound)	-- Queued the sound into the source queue
				sound_source.play
			end
		end

	on_quit(a_timestamp: NATURAL_32)
			-- This method is called when the quit signal is send to the application (ex: window X button pressed).
		do
			game_library.stop  -- Stop the controller loop (allow game_library.launch to return)
		end

end
