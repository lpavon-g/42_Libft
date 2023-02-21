/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:14:25 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/25 01:49:19 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies the source string to the destination
 * This function is similar to strncpy(), but copies at most size-1 \
 * to dst, always adds a terminating null byte, and does not pad \ 
 * the destination with (more) null bytes.
 * 
 * @param dest 
 * @param src 
 * @param dstsize 
 * @return size_t returns the total length of the string created \
 * without nul character at the end of the string
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize -1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
