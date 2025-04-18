#include "libft.h"

/*Function to clear a list using a function to free the content of each node*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if(lst && del){
		t_list *aux;
		while (*lst)
		{
			//store the current's next node, in order to not lose info
			aux = (*lst) -> next;
			//free the content of the current node
			del((*lst) ->content);
			//free the current node
			free(*lst);
			//as the memory still exit, we set the aux node to it
			*lst = aux;
		}
		//set the memory to null
		*lst = NULL;
	}
}
