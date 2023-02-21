/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:28:43 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/19 14:02:11 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief writes len bytes of value c (converted to an unsigned char) \ to
 * the string dest.
 * (i.e. string "helloworld", c = a/ i = 5 - string is now "aaaaaworld")
 * 
 * @param void *b = string 
 * @param c value
 * @param len string size
 * @return void* returns changed string
 */
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)b;
	while (i < len)
		str[i++] = (unsigned char)c;
	return (b);
}

/*int	main(void)
{
	char	str[] = "LAURA";
	char	c;

	c = 'x';
	ft_memset(str, c, 3);
	printf("%s\n", str);
	return (0);
}
*/