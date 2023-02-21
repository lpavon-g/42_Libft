/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:15:25 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/19 14:03:09 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief this function locates the	first occurrence of the	\
 * null-terminated string little ("needle") in the string big ("haystack"), \
 * where not more than len characters are searched. Characters that appear \
 * after a '\0' character are not searched. \
 * Since the strnstr() function is	a FreeBSD specific API,	it should \ 
 * only be used when portability is not a concern.
 * 
 * @param haystack (big)
 * @param needle (little)
 * @param len len
 * @return If little is an empty string, big is returned. If little \ 
 * occurs nowhere in big, NULL is returned; \ 
 * Otherwise a pointer to the first	character of the first occurrence \ 
 * of little is returned.
 */
char	*ft_strnstr(const char	*haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (needle[0] == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (i + j < len && haystack[i + j] == needle[j])
			{
				j++;
				if (!needle[j])
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (0);
}
