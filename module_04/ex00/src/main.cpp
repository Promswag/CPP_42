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
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();
		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		cat->makeSound();
		dog->makeSound();
		meta->makeSound();
		delete meta;
		delete cat;
		delete dog;
	}
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* cat = new WrongCat();
		meta->getType();
		cat->getType();
		meta->makeSound();
		cat->makeSound();
		(static_cast<const WrongCat *>(cat))->makeSound();
		((const WrongCat *)cat)->makeSound();
		delete meta;
		delete cat;
		const WrongCat* catou = new WrongCat();
		catou->makeSound();
		delete catou;
	}

	return (0);
}


