#ifndef __ICE__
# define __ICE__

# include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& copy);
		~Ice();

		Ice&		operator=(const Ice& rhs);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
