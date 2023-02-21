/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 19:07:06 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/20 18:50:06 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function allocates sufficient memory for a copy of the string\
 * str, does the copy and returns a pointer to it. \
 * The pointer may be used as an argument to the "free" function. \
 * 
 * @param str - original string
 * @return this function returns a pointer to the new-reserved space (in dst)
 */
char	*ft_strdup(const char *str)
{
	int		len;
	char	*ptr;
	int		i;

	i = 0;
	len = ft_strlen(str);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
