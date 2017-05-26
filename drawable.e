note
	description	: "Classe abstraite héritée par les classes d'objet affichable."
	auteur		: "David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

deferred class
	DRAWABLE

inherit
	POSITION

feature {NONE} -- implémentation

	animation_coordinates:LIST[TUPLE[x,y:INTEGER]]
			-- Chaque coordonnée de la portion de l'image dans `surface'

	old_timestamp:NATURAL_32
			--Quand le dernier mouvement est arrivé considérant `movement_delta'

feature {NONE} -- constantes

	movement_delta:NATURAL_32 = 10
			-- Le temps delta entre chaque mouvement de `Current'

	animation_delta:NATURAL_32 = 100
			-- Le temps delta entre chaque mouvement de `Current'

	left_surface:GAME_SURFACE
		-- les différentre surface de gauche
		
	right_surface:GAME_SURFACE
		-- les différentre surface de droite
invariant

note
    copyright: "Copyright (c) 2017, David Larouche "
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"

end
