#include "Fixed.hpp"
#include <iostream>

int	main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << "a is " << ++a << std::endl;
	std::cout << std::endl;
	std::cout << "a is " << a << " and b is " << b << std::endl;
	std::cout << "(a < b) " << ((a < b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a > b) " << ((a > b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a <= b) " << ((a <= b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a >= b) " << ((a >= b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a == b) " << ((a == b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a != b) " << ((a != b) ? "TRUE" : "FALSE") << std::endl;
	std::cout << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "(a++ < a) " << ((a++ < a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(++a < a) " << ((++a < a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a < a++) " << ((a < a++) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a < ++a) " << ((a < ++a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(++a == a) " << ((++a == a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a++ == a) " << ((a++ == a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a == ++a) " << ((a == ++a) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a == a++) " << ((a == a++) ? "TRUE" : "FALSE") << std::endl;
	std::cout << "(a != a) " << ((a != a) ? "TRUE" : "FALSE") << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;	
	std::cout << a++ << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a + Fixed(2) << std::endl;
	std::cout << a - Fixed(5) << std::endl;
	std::cout << a * Fixed(2) << std::endl;
	std::cout << a / Fixed(2) << std::endl;
	std::cout << a * Fixed(2) << std::endl;
	std::cout << a / Fixed(2) << std::endl;
	std::cout << Fixed::max(Fixed(3.0f), Fixed(2)) << std::endl;

	return (0);
}
