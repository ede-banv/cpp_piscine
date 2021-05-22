#include <iostream>
#include "Squad.hpp"

Squad::Squad(): _nb_units(0), _alst(NULL){}

Squad::Squad(const Squad& copy)
{
	if (this->_alst)
		ft_lstclear(this->_alst);
	*this = copy;
}

Squad::~Squad()
{
}

Squad&			Squad::operator=(const Squad& rhs)
{
	this->_nb_units = rhs.getCount();
	this->_alst = rhs.getUnit(0);
	return *this;
}

int				Squad::getCount() const
{
	return this->_nb_units;
}

ISpaceMarine*	Squad::getUnit(int n) const
{
	t_list	tmp;

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

t_list	*ft_lstnew(ISpaceMarine *new_member)
{
	t_list	*newelem;

	newelem->member = new_member;
	newelem->next = NULL;
	return (newelem);
}

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list **alst, t_list *newl)
{
	if (newl == NULL || alst == NULL)
		return ;
	if (*alst == NULL)
	{
		*alst = newl;
		return ;
	}
	ft_lstlast(*alst)->next = newl;
}

void	ft_lstdelone(t_list *lst)
{
	if (lst)
		delete(lst->member);
}

void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;
	t_list	*indice;

	if (!lst)
		return ;
	indice = *lst;
	while (indice)
	{
		tmp = indice->next;
		ft_lstdelone(indice);
		indice = tmp;
	}
	*lst = NULL;
}