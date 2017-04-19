note
	description	: "Se connecte au server pour aller cherché les score."
	auteur		: "Charles Magnan et David Larouche"
    date        : "2017-19-04 15:37"
    revision    : "0.1"


class
	SCORE

inherit
	THREAD
		RENAME
			make as make_thread
		end
create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			make_thread
		end
feature	{NONE} --implémentation	
	execute
			--L'exécution du {THREAD}
		local
			l_socket_client: NETWORK_STREAM_SOCKET
			l_addr_factory:INET_ADDRESS_FACTORY
		do
			create l_addr_factory
			if attached l_addr_factory.create_from_name ("localhost") as la_adresse then
				create l_socket_client.make_client_by_address_and_port (la_adresse, 5000)
				if not l_socket_client.invalid_address  then
					l_socket_client.set_timeout (10000)
					l_socket_client.connect
					l_socket_client.close
				end


			end
		end

end
