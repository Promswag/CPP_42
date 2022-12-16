#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

#define INVENTORY_SIZE 4

class MateriaSource : public IMateriaSource {
	AMateria *_materiaBook[INVENTORY_SIZE];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &o);
	MateriaSource& operator=(const MateriaSource &o);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria *materia);
	virtual AMateria* createMateria(std::string const &type);
};

#endif