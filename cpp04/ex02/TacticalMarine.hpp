#ifndef __TACTICALMARINE__
# define __TACTICALMARINE__

# include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
	public:
		TacticalMarine();
		TacticalMarine(const TacticalMarine& copy);
		~TacticalMarine();

		TacticalMarine&	operator=(const TacticalMarine& rhs);
		ISpaceMarine* 	clone() const;
		void 			battleCry() const;
		void 			rangedAttack() const;
		void 			meleeAttack() const;
};

#endif
