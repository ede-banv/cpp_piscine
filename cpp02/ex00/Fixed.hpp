#ifndef __FIXED__
# define __FIXED__

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed& copy);
		~Fixed();

		Fixed&	operator=(const Fixed& rhs);
		int		getRawBits() const;
		void	setRawBits(const int raw);
	private:
		int					_fixed_value;
		static const int	_fract = 8;
};

#endif
