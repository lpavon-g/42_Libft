/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 16:34:05 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/03 01:27:35 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

/**
 * this function counts the words or sections on the given string with a \ 
 * counter. These sections will later be stored in memory.
 */
static size_t	ft_wordcounter(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			words++;
		}
		else
			i++;
	}
	return (words);
}

/**
 * this function will traverse the string until it reaches NULL or the \
 * delimiter. It starts from the position of the pointer you assign to it.
 * It returns the dimension each memory cell will occupy.
 */
static size_t	ft_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * This function frees the occupied memory while traversing the string
*/
static void	ft_free(char **str)
{
	size_t	a;

	a = 0;
	while (str[a])
	{
		free(str[a]);
		a++;
	}
	free(str);
}

/**
 * This function traverses each element of the string and checks \ 
 * that it is correctly stored, until it reaches the delimeter. \ 
 * If it is not the case, it starts over again.
 */
static char	**ft_make_cells(char **str, char *s, char c)
{
	size_t	len;
	size_t	n;

	n = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = ft_len(s, c);
			s = s + len;
			str[n] = ft_substr(s - len, 0, len);
			if (str[n] == NULL)
			{
				ft_free(str);
				return (NULL);
			}
			n++;
		}
		else
			s++;
	}
	str[n] = NULL;
	return (str);
}

/**
 * @brief PRINCIPAL FUNCTION > divides a string in words separated \ 
 * by the given character.
 * We create a memory pool of type char **. Its size shall be char * \
 * and the number of fragments it has calculated with the ft_count_words \
 * function +1, to consider the last cell to be null.
 * We check that it has been created correctly, or we've been given \ 
 * the string. Otherwise, it will be NULL.
 * Once everything is correct, the main function will start to fill \ 
 * each cell with its corresponding substring.
 */
char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(sizeof(char *) * (ft_wordcounter(s, c) + 1));
	if (!str || !s)
		return (NULL);
	return (ft_make_cells(str, (char *)s, c));
}
