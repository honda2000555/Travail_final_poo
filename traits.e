note
	description	: "Classe contenant les différents caractéristiques de «Current»."
	auteur		: "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	TRAITS

feature --Accès

	health:INTEGER
			-- Les points de vie de «Current»

	damage:INTEGER
			-- Les points de dégâts de «Current»

	shooting_speed:INTEGER
			-- La vitesse de tire de «Current»

	speed:DOUBLE
			-- La vitesse de «Current»

invariant
	positive_damage: damage > 0
	positive__shooting_speed: shooting_speed > -1
	positive__speed: speed > -1

note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
