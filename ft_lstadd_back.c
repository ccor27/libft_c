#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	if (!*lst)
		*lst = new;
	else
	{
		aux = *lst;
		if (aux)
		{
			while (aux->next)
				aux = aux->next;
			aux->next = new;
		}
	}
}
