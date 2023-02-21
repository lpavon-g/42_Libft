/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:43:45 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/09 17:02:42 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief this function iterates the list and applies the f function to \
* each content of the node. It creates a list resulting from the correct \
* and sucessive application of the f function on each node. The del function \
* is used to delete a nodes content, if needed
*
* @param lst a pointer to a node
* @param f the direction of a pointer to a function used in the iteration\ 
* of each element of the list
* @param del a punter to the function used to delete a node's content, if \ 
* needed
*
* @return t_list* The new list, or Null if the memory fails.
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*tmp;

	if (!lst || !f || !del)
		return (NULL);
	result = NULL;
	while (lst != NULL)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (tmp == NULL)
		{
			ft_lstclear(&result, *del);
			return (NULL);
		}
		ft_lstadd_back(&result, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (result);
}
