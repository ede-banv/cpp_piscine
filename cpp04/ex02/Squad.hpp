#ifndef __SQUAD__
# define __SQUAD__

#include "ISquad.hpp"

typedef	struct	s_list
{
	struct s_list*	next;
	ISpaceMarine*	member;
}				t_list;

class Squad: public ISquad
{
	public:
		Squad();
		Squad(const Squad& copy);
		~Squad();

		Squad&			operator=(const Squad& rhs);
		int 			getCount() const;
		ISpaceMarine*	getUnit(int n) const;
		int 			push(ISpaceMarine*);
	private:
		int				_nb_units;
		t_list*			_alst;

};

#endif
