#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) const
{
	void (Harl::*funcPtr[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levelFinder[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (level == levelFinder[i])
			(this->*funcPtr[i])();
}

void Harl::debug() const
{
	std::cout << "IM UPSET! 😐" << std::endl;
}

void Harl::info() const
{
	std::cout << "IM ANGRY! 😠" << std::endl;
}

void Harl::warning() const
{
	std::cout << "IM MAD! 😡" << std::endl;
}

void Harl::error() const
{
	std::cout << "IM GIGAMAD, ALSO F*** YOU! 🖕😡🖕" << std::endl;
}
