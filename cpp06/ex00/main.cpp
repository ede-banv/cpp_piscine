#include <iostream>
#include <string>

void	show_char(const std::string& arg)
{

}

void	show_int(const std::string& arg)
{

}

void	show_float(const std::string& arg)
{

}

void	show_double(const std::string& arg)
{

}

int		main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments.\n";
	}
	else
	{
		std::string arg = static_cast<std::string>(av[1]);
		std::cout << "char: ";
		try
		{

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "int: ";
		try
		{

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "float: ";
		try
		{

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << "double: ";
		try
		{

		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

}