#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &o);
		ClapTrap& operator = (const ClapTrap &o);
		virtual ~ClapTrap();

		ClapTrap(std::string name);
		void setName(std::string name);
		std::string getName(void) const;

		void attack(const std::string target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string _type;
		std::string _name;
		int _maxHp;
		int _maxEp;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

#endif