#ifndef __ASSAULTTERMINATOR__
# define __ASSAULTTERMINATOR__

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator& copy);
		~AssaultTerminator();

		AssaultTerminator&	operator=(const AssaultTerminator& rhs);
		ISpaceMarine* 	clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif
