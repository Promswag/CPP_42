#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		const Dog dog1;
		dog1.setIdea(0, "prout");
		std::cout << "Dog 1, idea 0: ";
		dog1.printIdea(0);
		{
			const Dog dog2 = dog1;
			std::cout << "Dog 2, idea 0: ";
			dog2.printIdea(0);
			dog2.setIdea(1, "caca");
			std::cout << "Dog 2, idea 1: ";
			dog2.printIdea(1);
			std::cout << "Dog 1, idea 1: ";
			dog1.printIdea(1);
		}
		dog1.printIdea(1);
		{
			const Animal *cat1 = new Cat;
			static_cast<const Cat *>(cat1)->setIdea(0, "Meow");
			static_cast<const Cat *>(cat1)->setIdea(1, "Meowwwwwww");
			cat1->makeSound();
			static_cast<const Cat *>(cat1)->makeSound();
			std::cout << "Cat 1, idea 0: ";
			static_cast<const Cat *>(cat1)->printIdea(0);
			std::cout << "Cat 1, idea 1: ";
			static_cast<const Cat *>(cat1)->printIdea(1);
			const Cat *cat2 = new Cat(*static_cast<const Cat *>(cat1));
			std::cout << "Cat 2, idea 0: ";
			cat2->printIdea(0);
			std::cout << "Cat 2, idea 1: ";
			cat2->printIdea(1);
			cat2->setIdea(0, "MEOW");
			std::cout << "Cat 1, idea 0: ";
			static_cast<const Cat *>(cat1)->printIdea(0);
			std::cout << "Cat 2, idea 0: ";
			cat2->printIdea(0);
			delete cat1;
			delete cat2;
		}
		// const Animal kek;
	}

	return (0);
}


