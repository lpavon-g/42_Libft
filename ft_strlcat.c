/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 15:46:01 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/01/25 01:52:46 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief this function copies and concatenate strings. It takes the full \
 * size of the destination buffer and guarantee NUL-termination if there is \ 
 * room. (Note: that room for the NUL should be included in dstsize).
 * Strlcat appends string src to the end of dst. It will append at most \ 
 * dstsize - strlen(dst) - 1 character. It will then NUL-terminate, \ 
 * unless dstsize is 0, or the original dst string was longer than \ 
 * dstsize.
 * If the src and dst strings overlap, the behavior is undefined.
 * 
 * @param dst 
 * @param src 
 * @param dstsize 
 * @return initial length of dst + length of src
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	x;
	size_t	y;
	char	*punt;

	x = 0;
	y = 0;
	punt = (char *)src;
	while (dst[x] != '\0' && x < dstsize)
		x++;
	while (punt[y] != '\0' && (x + y + 1) < dstsize)
	{
		dst[x + y] = punt[y];
		y++;
	}
	if (x < dstsize)
	{
		dst[x + y] = '\0';
	}
	return (ft_strlen(punt) + x);
}
