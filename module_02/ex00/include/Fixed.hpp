#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
	public:
		Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);

	private:
		int _value;
		static int const _fractionalBits;
};

#endif