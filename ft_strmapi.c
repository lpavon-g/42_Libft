/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:56:16 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/27 12:53:07 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function applicates the 'f' function to each character of the \
 * string given as an argument. This is done by giving 'f' the index as a \ 
 * first argument to create a new string from scratch, using malloc.
 * 
 * @param s 
 * @param f 
 * @return char* 
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*str;

	if (s == NULL && f == NULL)
		return (NULL);
	len = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(*s) * (len +1));
	if (!str)
		return (NULL);
	len = 0;
	while (s[len] != '\0')
	{
		str[len] = f(len, s[len]);
		len++;
	}
	str[len] = '\0';
	return (str);
}
