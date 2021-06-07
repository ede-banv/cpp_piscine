#ifndef __DATA__
# define __DATA__

# include <iostream>

class Data
{
	public:
		Data();
		Data(const Data& copy);
		virtual ~Data();

		Data&	operator=(const Data& rhs);
	private:
		std::string*	ptr1;
		int				random;
		std::string*	ptr2;
};

#endif
