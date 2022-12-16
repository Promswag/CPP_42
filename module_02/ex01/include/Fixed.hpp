#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		~Fixed();

		Fixed(const int value);
		Fixed(const float value);

		int getRawBits() const;
		void setRawBits(int const raw);

		float toFloat() const;
		int toInt() const;

	private:
		int _value;
		static int const _fractionalBits;
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif