/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 08:55:19 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:41 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function creates a new node (new variable for memory \ 
 * reservation) with a linked list, by using malloc, and initializes it \ 
 * with the given content.
 * 
 * @param content pointer to the content to store in the new node
 * @return t_list* returns a pointer to the new node created, or NULL in \
 * case of memory allocation error.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc (1 * sizeof(t_list));
	if (!new)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
