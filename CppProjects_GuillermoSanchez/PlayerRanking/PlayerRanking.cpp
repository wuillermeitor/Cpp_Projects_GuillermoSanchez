#include <iostream>
#include <map>
#include <vector>
#include <string>

std::string nombre;
int playerpunt;

struct player {
	std::string name;
};

std::map<int, player> players;

int main() {
	players[10] = { "Jordi" };
	players[8] = { "David" };
	players[12] = { "Josep" };
	players[5] = {"Maria"};

	std::cout << "Escribe tu nombre:" << std::endl;
	std::cin >> nombre;
	std::cout << "Ahora escribe tu puntuacion:" << std::endl;
	std::cin >> playerpunt;

	players[playerpunt] = {nombre};

	for (std::map<int, player>::iterator it = players.begin(); it != players.end(); ++it) {
		std::cout << it-> first <<std::endl;
	}
	return 0;
}