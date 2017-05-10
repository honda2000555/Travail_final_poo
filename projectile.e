note
	description	: "Classe contenant les caractéristiques d'un projectile."
	auteur		: "David Larouche"
    date        : "2017-04-04 3:55"
    revision    : "0.2"

class
	PROJECTILE

inherit
	POSITION

create
	make

feature --Initialisation

	make
	do
		x := player.x
		y := player.y
	end

feature --???

	find_direction
	do
		--Retourne une droite.
	end

note
    copyright: "Copyright (c) 2017, David Larouche "
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
