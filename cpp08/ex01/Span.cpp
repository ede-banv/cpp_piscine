#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span& copy)
{
	*this = copy;
}

Span::~Span(){}

Span&	Span::operator=(const Span& rhs)
{
	if (this == &rhs)
		return *this;
	std::list<int>::const_iterator	it, ite;

	this->_n = rhs._n;
	this->_arr.clear();
	ite = rhs._arr.end();
	for (it = rhs._arr.begin(); it != ite; it++)
		this->_arr.push_back(*it);
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_arr.size() == this->_n)
		throw std::logic_error("List full.");
	this->_arr.push_back(n);
}

int		Span::shortestSpan() const
{
	if (this->_arr.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span.");
	std::list<int>				sorted = this->_arr;
	std::list<int>::iterator	it, it2, ite;
	int							diff;

	sorted.sort();
	ite = sorted.end();
	it = ++sorted.begin();
	for (it2 = sorted.begin(); it != ite; it2++)
	{
		if (it2 == sorted.begin())
			diff = *it - *it2;
		else if (*it - *it2 < diff)
			diff = *it - *it2;
		it++;
	}
	return (diff);
}

int		Span::longestSpan() const
{
	if (this->_arr.size() < 2)
		throw std::logic_error("Not enough numbers to calculate span.");
	int	min = *std::min_element(this->_arr.begin(), this->_arr.end());
	int max = *std::max_element(this->_arr.begin(), this->_arr.end());
	return (max - min);
}
