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

		bool operator>(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator>=(const Fixed &f) const;
		bool operator<=(const Fixed &f) const;
		bool operator==(const Fixed &f) const;
		bool operator!=(const Fixed &f) const;

		Fixed& operator++();
		Fixed& operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		Fixed operator+(const Fixed &f) const;
		Fixed operator-(const Fixed &f) const;
		Fixed operator*(const Fixed &f) const;
		Fixed operator/(const Fixed &f) const;

		static Fixed& min(Fixed &f1, Fixed &f2);
		static const Fixed& min(const Fixed &f1, const Fixed &f2);
		static Fixed& max(Fixed &f1, Fixed &f2);
		static const Fixed& max(const Fixed &f1, const Fixed &f2);

	private:
		int _value;
		static int const _fractionalBits;
};

std::ostream& operator<<(std::ostream &out, const Fixed &f);

#endif