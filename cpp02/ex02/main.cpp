#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "b - c is " << b - c << std::endl;
	std::cout << "c * d is " << c * d << std::endl;
	std::cout << "a / d is " << a / d << std::endl;

	std::cout << "\nb == 10?" << std::endl;
	if (b == 10)
		std::cout << "egal" << std::endl;
	else
		std::cout << "non egal" << std::endl;
	std::cout << "\nb == a?" << std::endl;
	if (b == a)
		std::cout << "egal" << std::endl;
	else
		std::cout << "non egal" << std::endl;
	std::cout << "\nb > 10.1f?" << std::endl;
	if (b > 10.1f)
		std::cout << "sup" << std::endl;
	else
		std::cout << "non sup" << std::endl;
	std::cout << "\nb < 10.1f?" << std::endl;
	if (b < 10.1f)
		std::cout << "inf" << std::endl;
	else
		std::cout << "non inf" << std::endl;
	return 0;


}