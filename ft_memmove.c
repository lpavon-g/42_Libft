/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:17:33 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/25 01:01:32 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies len bytes from string src to string dst. (First, the bytes \
 * are copied into a temporary array, and then to "dst")
 * The two strings may overlap; the copy is always done in a non-destructive
 * manner.
 * 
 * @param dst 
 * @param src 
 * @param len 
 * @return void* returns the value of dst
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (0);
	if (d > s)
		while (len-- > 0)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

// int	main(void)
// {
// 	char	src[] = "Hello, World!";
// 	char	dst[] = "Holalaura";

// 	ft_memmove(dst, src, strlen(src) +1);
// 	printf("%s\n", dst);
// 	return (0);
// }
