#ifndef __MUTANTSTACK__
# define __MUTANTSTACK__

# include <iostream>
# include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		MutantStack(const MutantStack& copy): std::stack<T>(copy) {}
		~MutantStack() {}

		MutantStack&	operator=(const MutantStack& rhs) { std::stack<T>::operator=(rhs); return (*this); }
		typedef	typename std::stack<T>::container_type::iterator iterator;
		typedef	typename std::stack<T>::container_type::const_iterator const_iterator;

		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
};

#endif
