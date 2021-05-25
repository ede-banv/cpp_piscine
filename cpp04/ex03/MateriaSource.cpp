#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	bzero(&this->_source, sizeof(this->_source));
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	bzero(&this->_source, sizeof(this->_source));
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
	bzero(&this->_source, sizeof(this->_source));
	for (int i = 0; i < 4; i++)
		if (rhs._source[i])
			this->_source[i] = rhs._source[i]->clone();
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
