note
	description	: "Classe abstraite héritée par les classes d'objet affichable."
	auteur		: "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

deferred class
	DRAWABLE

inherit
	POSITION

feature {NONE} -- implémentation

	animation_coordinates:LIST[TUPLE[x,y:INTEGER]]
			-- Every coordinate of portion of images in `surface'

	old_timestamp:NATURAL_32
			-- When happen the last movement (considering `movement_delta')

feature {NONE} -- constantes

	movement_delta:NATURAL_32 = 10
			-- The delta time between each movement of `Current'

	animation_delta:NATURAL_32 = 100
			-- The delta time between each animation of `Current'

	left_surface:GAME_SURFACE

	right_surface:GAME_SURFACE

invariant

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"

end
