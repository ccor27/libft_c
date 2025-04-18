#include "libft.h"

/*Function to add a new node at the start of the list*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		//make the new node's next point to the start of the list
		new->next = lst[0];
		//then set the new node to the first of the list
		lst[0] = new;
	}
}
