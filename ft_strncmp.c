/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 19:05:52 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/24 23:05:43 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function compares the null-terminated strings s1 and s2. \
 * It compares len characters. Characters that appear after a '\0' \
 * are not compared
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int This function returns '0' if s1 = s2, a negative value \ 
 * if s1 < s2, and a positive value if s1 > s2
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
