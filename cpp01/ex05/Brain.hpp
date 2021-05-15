#ifndef __BRAIN__
# define __BRAIN__

# include <iostream>

class Brain
{
	public:
		Brain(int iq, int eq, std::string dom_side);
		~Brain();

		void*	identify() const;
	private:
		int			_iq;
		int			_eq;
		std::string	_dom_side;
};

#endif