#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
protected:
	std::string _type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &o);
	WrongAnimal& operator=(const WrongAnimal &o);
	virtual ~WrongAnimal();

	void makeSound() const;
	std::string getType() const;
};

#endif