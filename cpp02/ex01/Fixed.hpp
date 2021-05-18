#ifndef __FIXED__
# define __FIXED__

#include <iostream>
#include <fstream>

class Fixed
{
	public:
		Fixed();
		Fixed(const int n);
		Fixed(const float f);
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed&	operator=(const Fixed& rhs);
		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;
	private:
		int					_fixed_value;
		static const int	_fract = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs);

#endif
