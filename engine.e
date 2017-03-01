note
	description: "L'engin du jeu."
    author      : "Charles Magnan"
    date        : "2017-03-01 4:05"
    revision    : "0.1"

class
	ENGINE

inherit
	GAME_LIBRARY_SHARED
	AUDIO_LIBRARY_SHARED

create
	make

feature {NONE} -- Initialisation

	make
			-- Initialisation de «Current»
		local
			l_window_builder:GAME_WINDOW_SURFACED_BUILDER
		do
			create_sound
			create background
			create player
			create l_window_builder

			l_window_builder.set_title ("Example Animation")
			if not background.has_error then
				l_window_builder.set_dimension (1366, 768)
			end
			window := l_window_builder.generate_window
			has_error := false
		end

	iterator:INTEGER
			--Iterateur.

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

	background:BACKGROUND
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
			-- Prepare les sons ainsi que les sources de son
		local
			l_music_loop:AUDIO_SOUND_FILE
		do
			create {AUDIO_SOUND_FILE}sound.make ("pew.wav")			-- Son joue lorsque l'usager pese sur la barre d'espace
			create l_music_loop.make ("loop.flac")		-- Ce son jouera tant que l'application roule.
			audio_library.sources_add
			music_source:=audio_library.last_source_added
			audio_library.sources_add
			sound_source:=audio_library.last_source_added
			if sound.is_openable and l_music_loop.is_openable then
				sound.open
				l_music_loop.open
				if sound.is_open and l_music_loop.is_open then
					music_source.queue_sound_infinite_loop (l_music_loop)
				else
					has_error := True
				end
			else
				has_error := True
			end

		end

	on_iteration(a_timestamp:NATURAL_32)
			-- Evenement lance a chaque iteration
		local
			l_button:BUTTON
		do
			create l_button.default_create
			player.update (a_timestamp)	-- met a jour les animations et la position du joueur
			-- Pour que le joueur reste dans la fenetre
			if player.x < 0 then
				player.x := 0
			elseif player.x + player.sub_image_width > background.width then
				player.x := background.width - player.sub_image_width
			end

			-- Dessine la scene
			window.surface.draw_rectangle (create {GAME_COLOR}.make_rgb (0, 128, 255), 0, 0, background.width, background.height)
			window.surface.draw_surface (background, 0, 0)
			window.surface.draw_surface (l_button, 500,500)
			window.surface.draw_sub_surface (
									player.surface, player.sub_image_x, player.sub_image_y,
									player.sub_image_width, player.sub_image_height, player.x, player.y
								)

			-- Lance la mise a jour de la fenetre et du son
			window.update
			audio_library.update
		end


	on_key_pressed(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE)
			-- Action lorsqu'une touche du clavier est actionnee
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
			-- Action lorsqu'une touch du clavier est relachee
		do
			if not a_key_state.is_repeat then		-- Etre certain que la touche n'est pas une repetition
				if a_key_state.is_right then
					player.stop_right
				elseif a_key_state.is_left then
					player.stop_left
				end
			end
		end

	on_key_down_sound(a_timestamp: NATURAL_32; a_key_state: GAME_KEY_STATE)

		do
			if a_key_state.is_space and sound.is_open then
				if sound_source.is_playing then
					sound_source.stop
					sound.restart
				end

				sound_source.queue_sound (sound)
				sound_source.play
			end
		end

	on_quit(a_timestamp: NATURAL_32)
			-- Methode lance lorsque le signal d'arret
		do
			game_library.stop  -- Stop l'application
		end

end
