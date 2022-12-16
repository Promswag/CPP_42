#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	std::cout << "------------------------------------------------" << std::endl;
	{
		FragTrap john("John");
		john.attack("xD");
		john.beRepaired(500);
		john.takeDamage(500);
		john.beRepaired(500);
		john.takeDamage(99);
		john.takeDamage(1);
		john.beRepaired(50);
		john.takeDamage(50);
		john.highFivesGuys();
		std::cout << std::endl;

		FragTrap ed(john);
		ed.setName("Ed");
		ed.beRepaired(0);
		ed.takeDamage(99);
		ed.takeDamage(1);
		ed.beRepaired(101);
		ed.highFivesGuys();
		std::cout << std::endl;

		FragTrap seb;
		seb = ed;
		seb.setName("Seb");
		seb.beRepaired(0);
		seb.takeDamage(99);
		seb.takeDamage(1);
		seb.beRepaired(101);
		seb.highFivesGuys();
		std::cout << std::endl;
		
		FragTrap jenny;
		jenny.setName("Jenny");
		jenny.beRepaired(0);
		jenny.takeDamage(99);
		jenny.takeDamage(1);
		jenny.beRepaired(101);
		jenny.highFivesGuys();
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		ScavTrap john("John");
		john.attack("xD");
		john.beRepaired(500);
		john.takeDamage(500);
		john.beRepaired(500);
		john.takeDamage(99);
		john.takeDamage(1);
		john.beRepaired(50);
		john.takeDamage(50);
		john.guardGate();
		std::cout << std::endl;

		ScavTrap ed(john);
		ed.setName("Ed");
		ed.beRepaired(0);
		ed.takeDamage(99);
		ed.takeDamage(1);
		ed.beRepaired(101);
		ed.guardGate();
		std::cout << std::endl;

		ScavTrap seb;
		seb = ed;
		seb.setName("Seb");
		seb.beRepaired(0);
		seb.takeDamage(99);
		seb.takeDamage(1);
		seb.beRepaired(101);
		seb.guardGate();
		std::cout << std::endl;

		ScavTrap jenny;
		jenny.setName("Jenny");
		jenny.beRepaired(0);
		jenny.takeDamage(99);
		jenny.takeDamage(1);
		jenny.beRepaired(101);
		jenny.guardGate();
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;
	{
		ClapTrap john("John");
		john.attack("xD");
		john.beRepaired(500);
		john.takeDamage(500);
		john.beRepaired(500);
		john.takeDamage(99);
		john.takeDamage(1);
		john.beRepaired(50);
		john.takeDamage(50);
		std::cout << std::endl;

		ClapTrap ed(john);
		ed.setName("Ed");
		ed.beRepaired(0);
		ed.takeDamage(99);
		ed.takeDamage(1);
		ed.beRepaired(101);
		std::cout << std::endl;

		ClapTrap seb;
		seb = ed;
		seb.setName("Seb");
		seb.beRepaired(0);
		seb.takeDamage(99);
		seb.takeDamage(1);
		seb.beRepaired(101);
		std::cout << std::endl;

		ClapTrap jenny;
		jenny.setName("Jenny");
		jenny.beRepaired(0);
		jenny.takeDamage(99);
		jenny.takeDamage(1);
		jenny.beRepaired(101);
		std::cout << std::endl;
	}
	std::cout << "------------------------------------------------" << std::endl;

	return (0);
}


