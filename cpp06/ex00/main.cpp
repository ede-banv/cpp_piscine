#include <iostream>
#include <string>

void	show_char(const double d)
{
	(void)d;
	std::cout << "char: ";
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

void	show_float(const double d)
{
	std::cout << "float: ";
	float	f = static_cast<float>(d);
	std::cout << f << "f" << std::endl;
}

void	show_double(const double d)
{
	std::cout << "double: " << d << std::endl;
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
		std::string arg = static_cast<std::string>(av[1]);
		double		d = std::stod(arg);
		show_int(d);
		show_float(d);
		show_double(d);
	}
	return (0);
}