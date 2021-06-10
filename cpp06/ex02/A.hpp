#ifndef __A__
# define __A__

# include "Base.hpp"

class A: public Base
{
	public:
		A();
		A(const A& copy);
		virtual ~A();
		A&	operator=(const A& rhs);
	private:
};

#endif
