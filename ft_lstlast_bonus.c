#include "libft.h"

/*Function to get the last node of the list*/
t_list *ft_lstlast(t_list *lst)
{
	t_list	*aux;

	aux = lst;
	while (aux->next)
		aux = aux->next;
	return(aux);
}
