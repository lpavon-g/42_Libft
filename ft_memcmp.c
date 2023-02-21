/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 16:08:27 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/19 14:01:50 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compares byte string b1 against byte string b2. Both strings\
 * are assumed to be len bytes long.
 * 
 * @param str1
 * @param str2
 * @param len 
 * @return Returns 0 if the two strings are identical, otherwise returns\
 * the	difference between the first two differing bytes
 * Zero-length	strings	are always identical.
 */
int	ft_memcmp(const void *str1, const void *str2, size_t count)
{
	unsigned char	*s1_c;
	unsigned char	*s2_c;
	size_t			i;

	s1_c = (unsigned char *)str1;
	s2_c = (unsigned char *)str2;
	i = 0;
	while (i < count)
	{
		if (s1_c[i] != s2_c[i])
			return (s1_c[i] - s2_c[i]);
		i++;
	}
	if (i != count)
		return (s1_c[i] - s2_c[i]);
	return (0);
}
