#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain *_brain;
	
public:
	Dog();
	Dog(const Dog &o);
	Dog& operator=(const Dog &o);
	virtual ~Dog();

	void makeSound() const;
	void setIdea(int ideaNum, std::string ideaStr) const;
	void printIdea(int ideaNum) const;
};

#endif