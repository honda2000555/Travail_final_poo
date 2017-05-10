note
    description : "Server de l'application.%
    			%Classe servant à initialiser l'engin."
    auteur      : "David Larouche"
    generator   : "Eiffel Game2 Project Wizard"
    date        : "2017-21-03 3:30"
    revision    : "0.1"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
		local
			l_socket_serveur: NETWORK_STREAM_SOCKET
		do
			create l_socket_serveur.make_server_by_port (5000)
			if l_socket_serveur.is_bound then
				l_socket_serveur.listen (1)
				l_socket_serveur.accept
				if attached l_socket_serveur.accepted as la_socket_client then
					if attached la_socket_client.peer_address as la_adresse then
						print("Vous-estes Connecté")
					end
				end
				l_socket_serveur.close
			end
		end
end
