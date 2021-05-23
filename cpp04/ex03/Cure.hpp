#ifndef __CURE__
# define __CURE__

#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure();
		Cure(const Cure& copy);
		~Cure();

		Cure&		operator=(const Cure& rhs);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif
