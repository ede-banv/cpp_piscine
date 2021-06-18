#ifndef __SPAN__
# define __SPAN__

# include <iostream>
# include <algorithm>
# include <list>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span& copy);
		virtual ~Span();

		Span&	operator=(const Span& rhs);
		void	addNumber(int n);
		int		shortestSpan() const;
		int		longestSpan() const;

		template<typename It>
		void	addRange(It begin, const It end)
		{
			if (this->_n - this->_arr.size() < static_cast<unsigned int>(std::distance(begin, end)))
				throw std::logic_error("List full.");
			this->_arr.insert(this->_arr.end(), begin, end);
		}
	private:
		unsigned int	_n;
		std::list<int>	_arr;

		Span();
};

#endif
