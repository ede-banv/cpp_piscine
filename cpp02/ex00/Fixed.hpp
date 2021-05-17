#ifndef __FIXED__
# define __FIXED__

class Fixed
{
	public:
		Fixed();
		Fixed(Fixed& copy);
		~Fixed();

		Fixed&	operator=(Fixed const& rhs);
	private:
		/*args*/
};

#endif
