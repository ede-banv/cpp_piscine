#ifndef __BASE__
# define __BASE__

class Base
{
	public:
		virtual ~Base();
	protected:
		Base();
		Base(const Base& copy);
		Base&	operator=(const Base& rhs);
};

#endif
