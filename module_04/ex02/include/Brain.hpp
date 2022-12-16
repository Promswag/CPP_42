#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
	std::string _ideas[100];
	
public:
	Brain();
	Brain(const Brain &o);
	Brain& operator=(const Brain &o);
	~Brain();

	void setIdea(int ideaNum, std::string ideaStr);
	void printIdea(int ideaNum) const;
};

#endif