#include <iostream>
#include "iter.hpp"
class Awesome {
	public:
	Awesome( void ) : _n( 42 ) { return; }
	int get( void ) const { return this->_n; }

	private:
	int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

int main() {

	int tab[] = { 0, 1, 2, 3, 4 }; // <--- J'ai jamais compris pourquoi on peut pas ecrire int[] tab. Ca aurait plus de sens vous trouvez pas ?
	Awesome tab2[5];

	iter( tab, 5, print );
	iter( tab2, 5, print );

	return 0;
}
/*
template<typename T>
void	show_elem(T a)
{
	std::cout << a << std::endl;
}

int		main()
{
	std::string	ptr = "string";
	int			ints[4] = {1, 2, 3, 4};
	std::string	array[4] = {"one", "two", "three", "four"};

	std::cout << "Iter on char array" << std::endl;
	iter(ptr.c_str(), 6, &show_elem);
	std::cout << std::endl;

	std::cout << "Iter on int array" << std::endl;
	iter(ints, 4, &show_elem);
	std::cout << std::endl;

	std::cout << "Iter on string array" << std::endl;
	iter(array, 4, &show_elem);
	return (0);
}*/