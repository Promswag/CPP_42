#include "Fixed.hpp"
#include <iostream>
#include <cmath>

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
	this->_value = roundf(value * (1 << this->_fractionalBits));
}

int Fixed::getRawBits() const {
	return this->_value;
}

void Fixed::setRawBits(int const raw) {	
	this->_value = raw;
}

float Fixed::toFloat() const {
	return static_cast<float>(this->_value) / (1 << this->_fractionalBits);
}

int Fixed::toInt() const {
	return this->_value >> this->_fractionalBits;
}

// COMPARISON OPERATORS >, <, >=, <=, ==, !=
bool Fixed::operator>(const Fixed &f) const {
	return this->_value > f.getRawBits();
}

bool Fixed::operator<(const Fixed &f) const {
	return this->_value < f.getRawBits();
}

bool Fixed::operator>=(const Fixed &f) const {
	return this->_value >= f.getRawBits();
}

bool Fixed::operator<=(const Fixed &f) const {
	return this->_value <= f.getRawBits();
}

bool Fixed::operator==(const Fixed &f) const {
	return this->_value == f.getRawBits();
}

bool Fixed::operator!=(const Fixed &f) const {
	return this->_value != f.getRawBits();
}

//	(PRE/POST)-(IN/DE)CREMENT OPERATORS ++f, --f, f++, f--
Fixed& Fixed::operator++() {
	_value++;
	return *this;
}

Fixed& Fixed::operator--() {
	_value--;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	++*this;
	return tmp;
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	--*this;
	return tmp;
}

// ARITHEMIC OPERATOS +, -, *, /
Fixed Fixed::operator+(const Fixed &f) const {
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(const Fixed &f) const {
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(const Fixed &f) const {
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(const Fixed &f) const {
	return (Fixed(this->toFloat() / f.toFloat()));
}

//	MIN, MAX
Fixed& Fixed::min(Fixed &f1, Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2) {
	return f1 < f2 ? f1 : f2;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2) {
	return f1 > f2 ? f1 : f2;
}

//	FREE FUNCTION, INSERTION OPERATOR <<
std::ostream& operator << (std::ostream &out, const Fixed &f) {
	return out << f.toFloat();
}
