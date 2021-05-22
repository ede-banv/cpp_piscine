#include "Squad.cpp"

t_list	*ft_lstnew(ISpaceMarine *new_member)
{
	t_list	*newelem = NULL;

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