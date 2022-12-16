#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
	std::cout << "Dog default constructor called." << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &o) :
	Animal(o) {
	std::cout << "Dog copy constructor called." << std::endl; 
}

Dog &Dog::operator=(const Dog &o) {
	std::cout << "Dog copy assignement constructor called." << std::endl; 
	_type = o._type;
	return *this;
}

Dog::~Dog() { std::cout << "Dog destructor called." << std::endl; }

void Dog::makeSound() const { std::cout << "Dog goes 'WOOF WOOF'!" << std::endl; }
