#include "libft.h"

/*Function to add a new node in the end of the list*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*aux;

	//if the list is empty, the new node will be the first one
	if (!*lst)
		*lst = new;
	else
	{
		aux = *lst;
		if (aux)
		{
			//loop to reach the last node
			while (aux->next)
				aux = aux->next;
			aux->next = new;//add the new node
		}
	}
}
