#include <iostream>
#include <iomanip>
#include <string>

void	show_char(const double d)
{
	std::cout << "char: ";
	long int	i = static_cast<long int>(d);
	if (i < CHAR_MIN || i > CHAR_MAX)
	{
		std::cout << "impossible\n";
		return ;
	}
	char	c = static_cast<char>(d);
	if (!std::isprint(c))
		std::cout << "Non displayable\n";
	else
		std::cout << "'" << c << "'" << std::endl;
}

void	show_int(const double d)
{
	std::cout << "int: ";
	long int	i = static_cast<long int>(d);
	if (i < INT_MIN || i > INT_MAX)
		std::cout << "impossible\n";
	else
		std::cout << i << std::endl;
}

void	show_float(const double d, const unsigned int prec)
{
	std::cout << "float: ";
	float	f = static_cast<float>(d);
	std::cout << std::setprecision(prec) << std::fixed << f << "f" << std::endl;
}

void	show_double(const double d, const unsigned int prec)
{
	std::cout << std::setprecision(prec) <<"double: " << d << std::endl;
}

unsigned int	calc_precision(const char* arg)
{
	while (*arg && *arg != '.')
		arg++;
	if (!*arg)
		return (1);
	int i = 1;
	while (arg[i] && isdigit(arg[i]))
		i++;
	return (i - 1);
}

int		main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments.\n";
		return (1);
	}
	else
	{
		double			d = std::atof(av[1]);
		unsigned int	prec = calc_precision(av[1]);
		show_char(d);
		show_int(d);
		show_float(d, prec);
		show_double(d, prec);
	}
	return (0);
}