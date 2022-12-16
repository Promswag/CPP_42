#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	// tmp = NULL;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	// tmp = NULL;

	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	tmp = ((Character *)me)->saveMateria(0);
	// me->unequip(0);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(2, *bob);
	// if (tmp)
	// 	delete tmp;
	delete bob;
	delete me;
	delete src;

	return (0);
}


