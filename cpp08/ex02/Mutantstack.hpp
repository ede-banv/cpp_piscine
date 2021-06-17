#ifndef __MUTANTSTACK__
# define __MUTANTSTACK__

# include <stack>

template<typename T>
class Mutantstack: public std::stack
{
	public:
		Mutantstack(): std::stack<T>() {}
		Mutantstack(const Mutantstack& copy): std::stack<T>(copy) {}
		~Mutantstack() {}

		Mutantstack&	operator=(const Mutantstack& rhs) { std::stack<T>::operator=(rhs); }
	private:
		/*args*/
};

#endif
