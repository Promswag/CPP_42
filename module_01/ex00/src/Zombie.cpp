#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) {
	this->_name = name;
}

Zombie::~Zombie() {
	std::cout << this->_name << ": BLeeuHrhRHGHGHhhh..." << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
