#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
	std::cout << "WrongCat default constructor called." << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &o) :
	WrongAnimal(o) {
	std::cout << "WrongCat copy constructor called." << std::endl; 
}

WrongCat &WrongCat::operator=(const WrongCat &o) {
	std::cout << "WrongCat copy assignement constructor called." << std::endl; 
	_type = o._type;
	return *this;
}

WrongCat::~WrongCat() { std::cout << "WrongCat destructor called." << std::endl; }

void WrongCat::makeSound() const { std::cout << "WrongCat goes 'Meowwwwww'!" << std::endl; }
