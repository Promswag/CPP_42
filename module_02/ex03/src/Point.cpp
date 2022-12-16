#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Point &p) : _x(p._x), _y(p._y) {}

Point& Point::operator=(const Point &p) {
	(void)p;
	return *this;
}

Point::~Point() {}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y)) {}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y) {}

const Fixed& Point::getX() const { return this->_x; }

const Fixed& Point::getY() const { return this->_y; }

bool Point::operator==(const Point &p) const {
	return this->_x == p.getX() && this->_y == p.getY();
}
