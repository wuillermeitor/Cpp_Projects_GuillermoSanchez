#include <iostream>
#include <string>
#include <ctime>

const int ZombieN{ 10 };

float random(float max, float min) {
	float limit = max - min;
	float randomnum = rand() % (limit + 1.0) + min;
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

class Zombie;

class Player {
public:
	Weapon weapon;
	float precision;
	int life;
	void attack(Zombie &);
	bool isAlive();
	Player() : weapon{ random(0, 6) }, precision{ random(0.0, 1.0) }, life{ 100 };
};

class Zombie{
public:
	int distanceToPlayer;
	float speed;
	float damage;
	int life;
	void attack(Player &);
	bool isAlive();
	Zombie() : distanceToPlayer{ random(20, 200) }, speed{ random(0.0,20.0) }, damage{ random(0.0,20.0) };
};

void Player::attack(Zombie &Z) {
	Z.life;
}

bool Player::isAlive() {
	return life > 0;
}

void Zombie::attack (Player &P) {
	if (distanceToPlayer <= 0) {
		P.life -= damage*weapon;
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
	Zombie zombies[ZombieN];
	bool zombiesAreAlive;

	do {
		zombiesAreAlive = false;
		for (int i = 0; i < ZombieN; i++) {

		}
	} while (player.isAlive == true && NzombiesAlive>=1);
}