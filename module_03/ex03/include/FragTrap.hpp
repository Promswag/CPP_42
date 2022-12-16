#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap &o);
		FragTrap & operator = (const FragTrap &o);
		virtual ~FragTrap();

		void highFivesGuys() const;
};

#endif