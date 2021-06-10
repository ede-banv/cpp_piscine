#ifndef __B__
# define __B__

# include "Base.hpp"

class B: public Base
{
	public:
		B();
		B(const B& copy);
		virtual ~B();
		B&	operator=(const B& rhs);
	private:
};

#endif
