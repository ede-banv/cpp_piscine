#ifndef __DATA__
# define __DATA__

# include <iostream>
# include <fstream>

class Data
{
	public:
		Data(std::string ptr1, int n, std::string ptr2);
		Data(const Data& copy);
		virtual ~Data();

		Data&			operator=(const Data& rhs);
		std::string		getString(int n) const;
		int				getNum() const;
	private:
		std::string		_ptr1;
		int				_randnum;
		std::string		_ptr2;

		Data();
};

std::ostream&	operator<<(std::ostream& o, const Data& rhs);

#endif
