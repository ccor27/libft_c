#include "libft.h"

/*Function to create a new list base on existing one and applying function */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (lst && f && del)
	{
		new_list = NULL;
		while (lst)
		{
			//set the content using the f function
			new_content = f(lst->content);
			//create the new node
			new_node = ft_lstnew(new_content);
			//validate allocation errors
			if (!new_node)
			{
				//remove/free the new node content
				del(new_content);
				//remove/freet the list that we were creating
				ft_lstclear(&new_list, del);
				return (NULL);
			}
			//add the node to the end of the new list
			ft_lstadd_back(&new_list, new_node);
			lst = lst->next;
		}
		return (new_list);
	}
	return (NULL);
}
