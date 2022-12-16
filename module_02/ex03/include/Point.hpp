#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
	public:
		Point();
		Point(const Point &p);
		Point& operator=(const Point &p);
		~Point();

		Point(const float x, const float y);
		Point(const Fixed &x, const Fixed &y);
		const Fixed& getX() const;
		const Fixed& getY() const;

		bool operator==(const Point &p) const;

	private:
		const Fixed _x;
		const Fixed _y;
};

#endif