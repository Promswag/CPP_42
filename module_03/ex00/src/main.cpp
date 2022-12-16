#include "ClapTrap.hpp"

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	ClapTrap john;
	john.setName("John");

	ClapTrap bertrand("Bertrand");
	john.attack(bertrand.getName());
	john.takeDamage(5);

	ClapTrap jp = john;
	jp.setName("JP");
	john.takeDamage(5);
	jp.beRepaired(50);
	jp.beRepaired(50);
	jp.takeDamage(9);

	ClapTrap fred(jp);
	fred.setName("Fred");
	fred.beRepaired(10);
	fred.takeDamage(500);
	fred.beRepaired(500);
	fred.takeDamage(9);
	fred.takeDamage(9);

	ClapTrap jessy;
	jessy = jp;
	jessy.setName("Jessy");
	jessy.takeDamage(1);

	for (int i = 0; i < 12; i++)
		bertrand.attack("Dans le vide");

	return (0);
}


