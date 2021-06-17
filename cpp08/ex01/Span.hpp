#ifndef __SPAN__
# define __SPAN__

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
	private:
		unsigned int	_n;
		std::list<int>	_arr;

		Span();
};

#endif
