/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpavon-g <lpavon-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:29:29 by lpavon-g          #+#    #+#             */
/*   Updated: 2023/02/06 12:23:45 by lpavon-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief This function equals ft_putchar. It sends the character c to the \
 * specified file descriptor.
 * 
 * @param c 
 * @param fd
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
