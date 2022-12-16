#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name) {
	Zombie *ptr = new Zombie[n];
	for (int i = 0; i < n; i++)
		ptr[i].setName(name);
	return ptr;
}