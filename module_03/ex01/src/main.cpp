#include "ScavTrap.hpp"

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

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

	ScavTrap ed(john);
	ed.setName("Ed");
	ed.beRepaired(0);
	ed.takeDamage(99);
	ed.takeDamage(1);
	ed.beRepaired(101);

	ScavTrap seb;
	seb = ed;
	seb.setName("Seb");
	seb.beRepaired(0);
	seb.takeDamage(99);
	seb.takeDamage(1);
	seb.beRepaired(101);

	ScavTrap jenny;
	jenny.setName("Jenny");
	jenny.beRepaired(0);
	jenny.takeDamage(99);
	jenny.takeDamage(1);
	jenny.beRepaired(101);

	return (0);
}


