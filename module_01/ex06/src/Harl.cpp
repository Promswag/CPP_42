#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level) const
{
	int index = -1;
	std::string levelFinder[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (level == levelFinder[i])
			index = i;
	switch (index)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
		default:
			break;
	}
}

void Harl::debug() const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "IM UPSET! 😐" << std::endl;
}

void Harl::info() const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "IM ANGRY! 😠" << std::endl;
}

void Harl::warning() const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "IM MAD! 😡" << std::endl;
}

void Harl::error() const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "IM GIGAMAD, ALSO F*** YOU! 🖕😡🖕" << std::endl;
}
