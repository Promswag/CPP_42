#include "Brain.hpp"
#include <iostream>

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
	// for (int i = 0; i < 100; i++)
	// 	_ideas[i] = "";
}

Brain::Brain(const Brain &o) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = o._ideas[i];
}

Brain& Brain::operator=(const Brain &o) {
	std::cout << "Brain copy assignement constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = o._ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(int ideaNum, std::string ideaStr) {
	if (ideaNum >= 0 && ideaNum <= 99)
		_ideas[ideaNum] = ideaStr;
}

void Brain::printIdea(int ideaNum) const { std::cout << _ideas[ideaNum] << std::endl; }
