#ifndef __MATERIASOURCE__
# define __MATERIASOURCE__

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource& copy);
		~MateriaSource();

		MateriaSource&	operator=(const MateriaSource& rhs);
		void			learnMateria(AMateria* newmat);
        AMateria*		createMateria(const std::string& type);
	private:
		AMateria*	_source[4];
};

#endif
