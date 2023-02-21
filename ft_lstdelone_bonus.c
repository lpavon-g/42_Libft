/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:36:03 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/03 01:23:41 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function takes as a parameter a "list" node, and frees the \
 * memory of content, using the "del" function given as a parameter, and it \ 
 * also frees the node. The "next" memory must not be freed.
 * 
 * @param lst node to free
 * @param del pointer to the function used to free the content of the node.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
