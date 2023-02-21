/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 08:26:23 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/27 10:36:44 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief integer to ASCII. Using malloc, this function generates a string \
 * that represents the int value received as argument. Negative values need \
 * to be managed. This is a recursive function
 * 
 * @param n 
 * @return this function returns the string represented by the  number, and \
 * Null if the memory allocation doesn't work
 */
static size_t	ft_intlen(long x)
{
	size_t	i;

	i = 0;
	if (x <= 0)
	{
		i++;
	}
	while (x != 0)
	{
		x /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	n1;

	n1 = n;
	len = ft_intlen(n1);
	str = (char *) malloc (sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n1 < 0)
	{
		str[0] = '-';
		n1 = n1 * -1;
	}
	while (n1 > 0)
	{
		str[--len] = (n1 % 10) + '0';
		n1 = n1 / 10;
	}
	return (str);
}

// int	main(void)
// {
// 	int n = 768437468;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }