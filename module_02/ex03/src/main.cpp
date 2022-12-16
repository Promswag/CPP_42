#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	Point a(0, 0);
	Point b(3, 0);
	Point c(3, 3);
	Point d(0.1f, 2.0f);
	Point e(2.0f, 0.1f);
	Point f(1.0f, 1.0f);
	Point g(1.0f, 0.99f);
	Point h(0, 0);
	Point i(0, 0);

	std::cout << bsp(a, b, c, d) << std::endl;
	std::cout << bsp(a, b, c, e) << std::endl;
	std::cout << bsp(a, b, c, f) << std::endl;
	std::cout << bsp(a, b, c, g) << std::endl;
	std::cout << bsp(a, b, c, h) << std::endl;
	std::cout << bsp(a, b, c, i) << std::endl;

	return (0);
}


