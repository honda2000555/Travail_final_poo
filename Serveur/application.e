note
    description : "Server de l'application.%
    			%Classe servant à initialiser l'engin."
    auteur      : "David Larouche"
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
			l_message : STRING
			continuer :BOOLEAN
			bestScore : NATURAL_32
		do
			create l_socket_serveur.make_server_by_port (5000)
			bestScore :=15
			if l_socket_serveur.is_bound then
				from
					continuer :=true
				until
					continuer =false
				loop
					l_socket_serveur.listen (1)
					l_socket_serveur.accept
					if attached l_socket_serveur.accepted as la_socket_client then
						print("Vous-estes Connecté")
						la_socket_client.readstream (10)
						l_message:=la_socket_client.last_string
						if l_message ~ "requete" then
							renvoyer_highscore (bestScore,la_socket_client)
						else
							bestScore := highscore(l_message,bestScore)
						end
						la_socket_client.close
					end
				end
			l_socket_serveur.close
		end
	end

		highscore(message:STRING; bestScore :NATURAL_32):NATURAL_32
		-- Prend le score envoyer par le client et le remplace s'il est plus grand
		local
			l_score: NATURAL_32
			high_score :NATURAL_32
			do
				l_score :=message.to_natural_32
				if l_score < bestScore then
					high_score := l_score
				else
					high_score := bestScore
				end
				Result := high_score
			end
		renvoyer_highscore(bestScore: NATURAL_32; l_socket: SOCKET )
		-- prend le high score et le renvoit dans le jeu
		local

		do
			l_socket.put_natural_32(bestScore)
		end
end
