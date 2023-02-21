/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 19:33:39 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/24 23:34:12 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief writes len zero bytes	to the string s.\
 * If len is zero, bzero() does	nothing.
 * 
 * @param void *s string  
 * @param n size of b string
 */
void	ft_bzero(void *s, size_t len)
{
	unsigned char	*str;
	int				c;
	size_t			i;

	str = s;
	c = 0;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "LAURA";

	ft_bzero(str, 2);
	printf("%s\n", str);
	return (0);
}
*/