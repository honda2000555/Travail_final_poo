note
	description	: "Classe héritée par les classes d'objet ayant un position."
	auteur		: "Charles Magnan et David Larouche"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	POSITION

feature -- Accès

	x:INTEGER assign set_x
			-- Position en X.

	y:INTEGER assign set_y
			-- Position en y.

feature -- Modifications

	set_x(a_x:INTEGER)
			-- Assign the value of `x' with `a_x'
		require
			positive_a_x: a_x > 0
		do
			x := a_x
		ensure
			Is_Assign: x = a_x
		end

	set_y(a_y:INTEGER)
			-- Assign the value of `y' with `a_y'
		require
			positive_a_y: a_y > 0
		do
			y := a_y
		ensure
			Is_Assign: y = a_y
		end


invariant
	positive_x: x > 0
	positive_y: y > 0
note
    copyright: "Copyright (c) 2017, David Larouche and Charles Magnan"
	license:   "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
end
