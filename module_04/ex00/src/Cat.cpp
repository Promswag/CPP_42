#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat default constructor called." << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &o) :
	Animal(o) {
	std::cout << "Cat copy constructor called." << std::endl; 
}

Cat &Cat::operator=(const Cat &o) {
	std::cout << "Cat copy assignement constructor called." << std::endl; 
	_type = o._type;
	return *this;
}

Cat::~Cat() { std::cout << "Cat destructor called." << std::endl; }

void Cat::makeSound() const { std::cout << "Cat goes 'Meowwwwww'!" << std::endl; }
