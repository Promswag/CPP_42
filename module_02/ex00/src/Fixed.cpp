#include "Fixed.hpp"
#include <iostream>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_value = f.getRawBits();
}
Fixed &Fixed::operator = (const Fixed &f)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const { 
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value; 
}

void Fixed::setRawBits(int const raw) { 
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw; 
}
