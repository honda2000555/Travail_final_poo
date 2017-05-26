note
	description	: "Classe abstraite h�rit�e par les classes d'objet affichable."
	auteur		: "David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

deferred class
	DRAWABLE

inherit
	POSITION

feature {NONE} -- impl�mentation

	animation_coordinates:LIST[TUPLE[x,y:INTEGER]]
			-- Chaque coordonn�e de la portion de l'image dans `surface'

	old_timestamp:NATURAL_32
			--Quand le dernier mouvement est arriv� consid�rant `movement_delta'

feature {NONE} -- constantes

	movement_delta:NATURAL_32 = 10
			-- Le temps delta entre chaque mouvement de `Current'

	animation_delta:NATURAL_32 = 100
			-- Le temps delta entre chaque mouvement de `Current'

	left_surface:GAME_SURFACE
		-- les diff�rentre surface de gauche
		
	right_surface:GAME_SURFACE
		-- les diff�rentre surface de droite
invariant

note
    copyright: "Copyright (c) 2017, David Larouche "
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"

end
