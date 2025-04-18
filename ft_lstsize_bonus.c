#include "libft.h"

/*Function to know the number of nodes of a list */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*aux;

	count = 0;
	aux = lst;
	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}
