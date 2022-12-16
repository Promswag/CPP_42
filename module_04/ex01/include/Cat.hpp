#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	Brain *_brain;
	
public:
	Cat();
	Cat(const Cat &o);
	Cat& operator=(const Cat &o);
	virtual ~Cat();

	void makeSound() const;
	void setIdea(int ideaNum, std::string ideaStr) const;
	void printIdea(int ideaNum) const;
};

#endif