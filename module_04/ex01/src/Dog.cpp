#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	_type = "Dog";
	_brain = new Brain;
}

Dog::Dog(const Dog &o) :
	Animal(o) {
	std::cout << "Dog copy constructor called." << std::endl; 
	_brain = new Brain;
	*_brain = *(o._brain);
}

Dog &Dog::operator=(const Dog &o) {
	std::cout << "Dog copy assignement constructor called." << std::endl; 
	_type = o._type;
	_brain = new Brain;
	*_brain = *(o._brain);
	return *this;
}

Dog::~Dog() { 
	std::cout << "Dog destructor called." << std::endl;
	delete _brain;
}

void Dog::makeSound() const { std::cout << "Dog goes 'WOOF WOOF'!" << std::endl; }

void Dog::setIdea(int ideaNum, std::string ideaStr) const { _brain->setIdea(ideaNum, ideaStr); }

void Dog::printIdea(int ideaNum) const { _brain->printIdea(ideaNum); }
