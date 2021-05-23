#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
	*this = copy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& rhs)
{
	for (int i = 0; i < 4; i++)
		if (this->_source[i])
			delete this->_source[i];
	//copy source from rhs
	return *this;
}

void			MateriaSource::learnMateria(AMateria* newmat)
{
	for(int i = 0; i < 4; i++)
		if (!this->_source[i])
		{
			this->_source[i] = newmat;
			return;
		}
}

AMateria*		MateriaSource::createMateria(const std::string& type)
{
	for(int i = 0; i < 4; i++)
		if (this->_source[i]->getType() == type)
		{
			return this->_source[i]->clone();
		}
	return NULL;
}
