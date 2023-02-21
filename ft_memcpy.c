/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:55:30 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/25 00:56:15 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies len bytes from string	src to string dst.
 * If src and dst overlap, the results are not defined.
 * 
 * @param dst 
 * @param src 
 * @param len string length
 * @return void* the value of dst
 */
void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (0);
	while (len > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int	main(void)
{
	char	src[] = "LAURA";
	char	dst[] = "HOLII";

	printf("%s\n", src);
	ft_memcpy(dst, src, 2);
	printf("%s\n", dst);
	return (0);
}
*/
