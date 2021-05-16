#include "Human.hpp"
#include <memory>

Brain::Brain(int iq, int eq, std::string dom_side) :
_iq(iq), _eq(eq), _dom_side(dom_side)
{
	std::cout << "Interesting, this brain's IQ is " << this->_iq << " and it's EQ is " << this->_eq << "... Oh! and this person is " << this->_dom_side << "-handed!" << std::cout;
}

Brain::~Brain()
{}

void*	Brain::identify() const
{
	return (void *)this;
}