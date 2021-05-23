#ifndef __AMATERIA__
# define __AMATERIA__

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(const std::string& type);
		AMateria(const AMateria& copy);
		virtual ~AMateria();

		AMateria&			operator=(const AMateria& rhs);
		const std::string&	getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		unsigned int	_xp;
		std::string		_type;
	private:	
		AMateria();
};

#endif
