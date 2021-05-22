#include <iostream>
#include "Squad.hpp"

Squad::Squad(): _nb_units(0), _alst(NULL){}

Squad::Squad(const Squad& copy)
{
	if (this->_alst)
		ft_lstclear(&this->_alst);
	*this = copy;
}

Squad::~Squad()
{
	if (this->_alst)
		ft_lstclear(&this->_alst);
}

Squad&			Squad::operator=(const Squad& rhs)
{
	this->_nb_units = rhs.getCount();
	for (int i = 0; i < this->_nb_units; i++)
		this->push(rhs.getUnit(i));
	return *this;
}

int				Squad::getCount() const
{
	return this->_nb_units;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_list*	tmp;

	if (this->_alst && n < this->_nb_units)
	{
		tmp = this->_alst;
		for (int i = 0; i <= n; i++)
			tmp = tmp->next;
		return tmp->member;
	}
	return NULL;
}

int				Squad::push(ISpaceMarine* new_member)
{
	if (!new_member)
		return this->_nb_units;
	t_list	*n_m = ft_lstnew(new_member);
	ft_lstadd_back(&this->_alst, n_m);
	this->_nb_units++;
	return this->_nb_units;
}
