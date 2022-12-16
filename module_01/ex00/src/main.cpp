#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
	Zombie zombu = Zombie("Kek");
	zombu.announce();
	Zombie zomba("Lolita");
	zomba.announce();
	Zombie *ptr = newZombie("Bebert");
	ptr->announce();
	randomChump("Roger");
	delete ptr;
}
