#include "libft.h"

/*Function to apply a function to each node of the list*/
void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if(lst && f)
	{
		while(lst)
		{
			f(lst->content);
			lst = lst -> next;
		}
	}
}
