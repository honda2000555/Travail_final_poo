note
	description	: "Classe abstraite héritée par les classes d'objet déplaceable."
	author		: "Charles Magnan et David Larouche"
    date        : "2017-22-03 3:30"
    revision    : "0.1"

deferred class
	MOVABLE

feature -- Accès

	going_up:BOOLEAN
			-- Si `Current' se deplace a gauche

	going_down:BOOLEAN
			-- Si `Current' se deplace a droite

	going_left:BOOLEAN
			-- Si `Current' se deplace a gauche

	going_right:BOOLEAN
			-- Si `Current' se deplace a droite


feature -- Modifications

	go_up(a_timestamp:NATURAL_32)
			-- Fait `Current' aller en haut
		require
			not_moving_up: going_up = False
		deferred
		ensure
			moving_up: going_up = True
		end

	go_down(a_timestamp:NATURAL_32)
			-- Fait `Current' aller en bas
		require
			not_moving_down: going_down = False
		deferred
		ensure
			moving_down: going_down = True
		end

	go_left(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a gauche
		require
			not_moving_left: going_left = False
		deferred
		ensure
			moving_left: going_left = True
		end
	go_right(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a droite
		require
			not_moving_right: going_right = False
		deferred
		ensure
			moving_right: going_right = True
		end

	stop_up
			-- Fait `Current' arreter d'aller en haut
		require
			moving_up: going_up = True
		deferred
		ensure
			not_moving_up: going_up = False
		end

	stop_down
			-- Fait `Current' arreter d'aller en bas
		require
			moving_down: going_down = True
		deferred
		ensure
			not_moving_down: going_down = False
		end

	stop_left
			-- Fait `Current' arreter d'aller a gauche
		require
			moving_left: going_left = True
		deferred
		ensure
			not_moving_left: going_left = False
		end

	stop_right
			-- Fait `Current' arreter d'aller a droite
		require
			moving_right: going_right = True
		deferred
		ensure
			not_moving_right: going_right = False
		end

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
