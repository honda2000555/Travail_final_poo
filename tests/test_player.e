note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_PLAYER

inherit
	EQA_TEST_SET
		redefine
			on_prepare, on_clean
		end
	GAME_LIBRARY_SHARED
		undefine
			default_create
		end
	IMG_LIBRARY_SHARED
		undefine
			default_create
		end

feature{NONE}

	on_prepare
		do
			game_library.enable_video
			image_file_library.enable_png
		end
	on_clean
		do
			game_library.quit_library
			image_file_library.quit_library
		end
feature -- Test routines

	Test_going_up_limit
			-- Test_going_up_limit
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (0, 0)
			l_movable.go_up (0)
			assert ("	Test_going_up_limit", l_movable.going_up)
		end

	Test_going_up
			--Test_going_up
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (50, 50)
			l_movable.go_up (0)
			assert ("Test_going_up", l_movable.going_up)
		end

	Test_going_down
			-- Test_going_down
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (50, 50)
			l_movable.go_down (0)
			assert ("Test_going_down", l_movable.going_down)
		end
	Test_going_down_limit
			-- Test_going_up_limit
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (0, 0)
			l_movable.go_down (0)
			assert ("Test_going_up_limit", l_movable.going_down)
		end



	Test_going_right
			-- Test_going_right
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (50, 50)
			l_movable.go_right (0)
			assert ("Test_going_right", l_movable.going_right)
		end

	Test_going_right_limit
			-- Test_going_right_limit
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (0, 0)
			l_movable.go_right (0)
			assert ("Test_going_right_limit", l_movable.going_right)
		end

	Test_going_left
			-- Test_going_left
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (50, 50)
			l_movable.go_left (0)
			assert ("Test_going_left", l_movable.going_left)
		end

	Test_going_left_limit
			-- Test_going_left_limit
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (0, 0)
			l_movable.go_left (0)
			assert ("Test_going_left_limit", l_movable.going_left)
		end

	Test_stop_going_left
			-- Test_stop_going_left
		note
			testing:  "execution/isolated"
		local
			l_movable:PLAYER
		do
			create l_movable.make (50, 50)
			l_movable.go_left (0)
			l_movable.stop_left
			assert ("Test_stop_going_left", not l_movable.going_left)
		end

		Test_stop_going_right
				-- Test_stop_going_right
			note
				testing:  "execution/isolated"
			local
				l_movable:PLAYER
			do
				create l_movable.make (50, 50)
				l_movable.go_right (0)
				l_movable.stop_right
				assert ("Test_stop_going_right", not l_movable.going_right)
			end

			Test_stop_going_up
					-- Test_stop_going_up
				note
					testing:  "execution/isolated"
				local
					l_movable:PLAYER
				do
					create l_movable.make (50, 50)
					l_movable.go_up (0)
					l_movable.stop_up
					assert ("Test_stop_going_up", not l_movable.going_up)
				end

				Test_stop_going_down
						-- Test_stop_going_down
					note
						testing:  "execution/isolated"
					local
						l_movable:PLAYER
					do
						create l_movable.make (50, 50)
						l_movable.go_down (0)
						l_movable.stop_down
						assert ("Test_stop_going_down", not l_movable.going_down)
					end


end




