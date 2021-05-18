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

		int		getRawBits() const;
		void	setRawBits(const int raw);
		float	toFloat() const;
		int		toInt() const;

		Fixed&	operator=(const Fixed& rhs);
		int		operator+(const Fixed& rhs) const;
		int		operator-(const Fixed& rhs) const;
		int		operator*(const Fixed& rhs) const;
		int		operator/(const Fixed& rhs) const;
		bool	operator>(const Fixed& rhs) const;
		bool	operator<(const Fixed& rhs) const;
		bool	operator>=(const Fixed& rhs) const;
		bool	operator<=(const Fixed& rhs) const;
		bool	operator==(const Fixed& rhs) const;
		bool	operator!=(const Fixed& rhs) const;
		Fixed&	operator++(); //pre
		Fixed	operator++(int); //post
		Fixed&	operator--(); //pre
		Fixed	operator--(int);

		static Fixed&	min(Fixed& lhs, Fixed& rhs);
		static Fixed&	max(Fixed& lhs, Fixed& rhs);
	private:
		int					_fixed_value;
		static const int	_fract = 8;
};

std::ostream&	operator<<(std::ostream& o, const Fixed& rhs);

#endif
