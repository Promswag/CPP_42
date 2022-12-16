#include "Fixed.hpp"
#include <iostream>

int const Fixed::_fractionalBits = 8;

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	this->_value = f.getRawBits();
}
Fixed& Fixed::operator = (const Fixed &f)
{
	// std::cout << "Copy assignement operator called" << std::endl;
	this->_value = f.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	// std::cout << "Int constructor called" << std::endl;
	this->_value = value << this->_fractionalBits;
}

Fixed::Fixed(const float value) {
	// std::cout << "Float constructor called" << std::endl;
	this->_value = value * (1 << this->_fractionalBits);
}

int Fixed::getRawBits() const {
	return this->_value;
}

void Fixed::setRawBits(int const raw) {	
	this->_value = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_value / static_cast<float>(1 << this->_fractionalBits));
}

int Fixed::toInt() const {
	return this->_value >> this->_fractionalBits;
}

std::ostream& operator << (std::ostream &out, const Fixed &f) {
	return out << f.toFloat();
}
