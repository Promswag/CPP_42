#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	_type = "Cat";
	_brain = new Brain;
}

Cat::Cat(const Cat &o) :
	Animal(o) {
	std::cout << "Cat copy constructor called." << std::endl;
	_brain = new Brain;
	*_brain = *(o._brain);
}

Cat &Cat::operator=(const Cat &o) {
	std::cout << "Cat copy assignement constructor called." << std::endl; 
	_type = o._type;
	_brain = new Brain;
	*_brain = *(o._brain);
	return *this;
}

Cat::~Cat() { 
	std::cout << "Cat destructor called." << std::endl;
	delete _brain;
}

void Cat::makeSound() const { std::cout << "Cat goes 'Meowwwwww'!" << std::endl; }

void Cat::setIdea(int ideaNum, std::string ideaStr) const { _brain->setIdea(ideaNum, ideaStr); }

void Cat::printIdea(int ideaNum) const { _brain->printIdea(ideaNum); }
