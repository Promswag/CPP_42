#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name);

int main()
{
	int n = 10;

	Zombie *zombieHordePtr = zombieHorde(n, "JP");
	for (int i = 0; i < n; i++)
		zombieHordePtr[i].announce();
	delete[] zombieHordePtr;
}