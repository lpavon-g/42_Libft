/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 19:00:29 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/21 20:31:22 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief locates the first occurrence of c (converted a char) in the string\
 * pointed to by s. Null character is considered part of the string
 * 
 * @param str 
 * @param c 
 * @return char* returns a pointer to the located character, or NULL\
 * if the character does not appear on the string
 */
char	*ft_strchr(const char *str, int c)
{
	while (*str != (char)c)
	{
		if (!*str++)
			return (0);
	}
	return ((char *)str);
}

// int	main(void)
// {
// 	const char	str[] = "ABCDEFGHIJKL";
// 	char		c;

// 	c = 'E';
// 	printf("%p\n", ft_strchr(str, c));
// 	if (!*str)
// 		printf("NULL\n");
// 	return (0);
// }
