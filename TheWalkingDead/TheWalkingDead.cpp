#include <iostream>
#include <string>
#include <ctime>

const int ZombieN{ 10 };

float random(float max, float min) {
	int limit = max - min;
	float randomnum = rand() % (limit + 1) + min;

	return randomnum;
}

enum class Weapon {
	FISTS,
	GUN,
	SHOTGUN,
	REVOLVER,
	SNIPER,
	MACHINE_GUN,
	MAX
};

std::ostream& operator<< (std::ostream &os, const Weapon &weapon) {
	switch (weapon) {
	case Weapon::GUN:				return os << "gun";
	case Weapon::SHOTGUN:			return os << "shotgun";
	case Weapon::REVOLVER:			return os << "revolver";
	case Weapon::SNIPER:			return os << "sniper";
	case Weapon::MACHINE_GUN:		return os << "machine gun";
	default:						return os << "fists";
	}
}

class Zombie;

class Player {
public:
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie &);
	bool isAlive();
};

class Zombie {
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &);
	bool isAlive();
};

void Player::attack(Zombie &Z) {
	Z.life;
}

bool Player::isAlive() {
	return life > 0;
}

void Zombie::attack(Player &P) {
	if (distanceToPlayer <= 0) {
		P.life -= damage;
	}
	else {
		distanceToPlayer -= 20;
	}
}

bool Zombie::isAlive() {
	return life > 0;
}

int main() {
	srand(time(nullptr));
	int NzombiesAlive = ZombieN;
	Player player;
	player.weapon = (Weapon)random(0, 6);
	player.precision = random(0, 1);
	player.life = 100;
	Zombie zombies[ZombieN];
	for (int i = 0; i < ZombieN; i++) {
		zombies[i].distanceToPlayer = random(20, 200);
		zombies[i].speed = random(0, 20);
		zombies[i].damage = random(0, 20);
		zombies[i].life = 100;
	}
	bool zombiesAreAlive;

	do {
		zombiesAreAlive = false;
		for (int i = 0; i < ZombieN; i++) {

		}
	} while (player.isAlive == true && NzombiesAlive >= 1);
}