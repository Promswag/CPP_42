#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() { std::cout << "WrongAnimal default constructor called." << std::endl; }	

WrongAnimal::WrongAnimal(const WrongAnimal &o) :
	_type(o._type) {
	std::cout << "WrongAnimal copy constructor called." << std::endl; 
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &o) {
	std::cout << "WrongAnimal copy assignement constructor called." << std::endl; 
	_type = o._type;
	return *this;
}

WrongAnimal::~WrongAnimal() { std::cout << "WrongAnimal destructor called." << std::endl; }

void WrongAnimal::makeSound() const { std::cout << "WrongAnimal doesn't make any sound!" << std::endl; }

std::string WrongAnimal::getType() const { return _type; }
