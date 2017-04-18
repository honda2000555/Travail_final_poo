note
	description	: "Classes contenant les caractéristiques de la carte."
	auteur		: "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	MAP

create
	make

feature -- Initialisation

	make
		local
			index, i, j:INTEGER
		do
			create current_arena
			create arena_array.make_filled (current_arena, 0, 120)
		end

feature	--Accès

	arena_array:ARRAY[ARENA]
			-- Tableau contenant les arènes du jeu.

	current_arena:ARENA assign set_current_arena
			-- L'arène «Current».

feature -- Modifications

	set_current_arena(a_current_arena:ARENA)
		do
			current_arena := a_current_arena
		end

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
