#ifndef __C__
# define __C__

# include "Base.hpp"

class C: public Base
{
	public:
		C();
		C(const C& copy);
		virtual ~C();
		C&	operator=(const C& rhs);
	private:
};

#endif
