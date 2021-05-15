#include "Human.hpp"
#include <memory>

Brain::Brain(int iq, int eq, std::string dom_side) :
_iq(iq), _eq(eq), _dom_side(dom_side) { (void)_iq; (void)_eq;}

Brain::~Brain()
{}

void*	Brain::identify() const
{
	return (void *)this;
}