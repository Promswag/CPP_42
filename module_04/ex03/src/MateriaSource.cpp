#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_materiaBook[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &o) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		_materiaBook[i] = NULL;
		if (o._materiaBook[i])
			_materiaBook[i] = o._materiaBook[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &o) {
	if (this == &o)
		return *this;		
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (_materiaBook[i])
			delete _materiaBook[i];
		_materiaBook[i] = NULL;
		if (o._materiaBook[i])
			_materiaBook[i] = o._materiaBook[i]->clone();
	}
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (_materiaBook[i])
			delete _materiaBook[i];
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (_materiaBook[i] == NULL) {
			_materiaBook[i] = materia;
			return;
		}
	}
	std::cout << "Materia book is full!" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (_materiaBook[i] && _materiaBook[i]->getType() == type) {
			return _materiaBook[i]->clone();
		}
	}
	std::cout << type << " does not match any learned Materia!" << std::endl;
	return 0;
}
