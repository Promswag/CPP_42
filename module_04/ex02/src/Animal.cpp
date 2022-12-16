#include "Animal.hpp"
#include <iostream>

Animal::Animal() { std::cout << "Animal default constructor called." << std::endl; }	

Animal::Animal(const Animal &o) :
	_type(o._type) {
	std::cout << "Animal copy constructor called." << std::endl; 
}

Animal &Animal::operator=(const Animal &o) {
	std::cout << "Animal copy assignement constructor called." << std::endl; 
	_type = o._type;
	return *this;
}

Animal::~Animal() { std::cout << "Animal destructor called." << std::endl; }

void Animal::makeSound() const { std::cout << "Animal doesn't make any sound!" << std::endl; }

std::string Animal::getType() const { return _type; }
