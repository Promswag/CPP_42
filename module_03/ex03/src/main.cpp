#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::cout << "-----------" << std::endl;
		
		DiamondTrap p;
		p.setName("Jeremy");
		p.whoAmI();
		p.attack("XD");
		p.print();
		p.guardGate();
		p.highFivesGuys();

		std::cout << "-----------" << std::endl;

		DiamondTrap seb("Seb");
		seb.whoAmI();
		seb.attack("XD");
		seb.print();

		std::cout << "-----------" << std::endl;

		DiamondTrap fred(seb);
		fred.setName("Fred");
		fred.whoAmI();
		fred.attack("XD");
		fred.print();

		std::cout << "-----------" << std::endl;

		DiamondTrap jenny;
		jenny = fred;
		jenny.setName("Jenny");
		jenny.whoAmI();
		jenny.attack("XD");
		jenny.print();

		std::cout << "-----------" << std::endl;
	}
	return (0);
}


