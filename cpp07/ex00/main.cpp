#include <iostream>
#include "whatever.hpp"

int main()
{
	int a = 2;
	int b = 3;
	int e = 3;

	std::cout << "Before swap:\n" << "a = " << a << ", b = " << b << ", e = " << e << std::endl << std::endl;
	::swap( a, b );
	std::cout << "After swap:\n" << "a = " << a << ", b = " << b << ", e = " << e << std::endl << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "min( a, c ) = " << ::min( a, e ) << std::endl;
	std::cout << "max( a, c ) = " << ::max( a, e ) << std::endl;
	std::cout<< std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::string f = "chaine2";

	std::cout << "Before swap:\n" << "c = " << c << ", d = " << d << ", f = " << f << std::endl << std::endl;
	::swap(c, d);
	std::cout << "After swap:\n" << "c = " << c << ", d = " << d << ", f = " << f << std::endl << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "min( c, f ) = " << ::min( c, f ) << std::endl;
	std::cout << "max( c, f ) = " << ::max( c, f ) << std::endl;
	return (0);
}