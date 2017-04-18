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
			not_moving_up: not going_up
		deferred
		ensure
			moving_up: going_up
		end

	go_down(a_timestamp:NATURAL_32)
			-- Fait `Current' aller en bas
		require
			not_moving_down: not going_down
		deferred
		ensure
			moving_down: going_down
		end

	go_left(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a gauche
		require
			not_moving_left: not going_left
		deferred
		ensure
			moving_left: going_left
		end
	go_right(a_timestamp:NATURAL_32)
			-- Fait `Current' aller a droite
		require
			not_moving_right: not going_right
		deferred
		ensure
			moving_right: going_right
		end

	stop_up
			-- Fait `Current' arreter d'aller en haut
		require
			moving_up: going_up
		deferred
		ensure
			not_moving_up: nor= not going_up
		end

	stop_down
			-- Fait `Current' arreter d'aller en bas
		require
			moving_down: going_down
		deferred
		ensure
			not_moving_down: not going_down
		end

	stop_left
			-- Fait `Current' arreter d'aller a gauche
		require
			moving_left: going_left
		deferred
		ensure
			not_moving_left: not going_left
		end

	stop_right
			-- Fait `Current' arreter d'aller a droite
		require
			moving_right: going_right
		deferred
		ensure
			not_moving_right: not going_right
		end
invariant
	not (going_up and going_down)
	not (going_right and going_left)

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
