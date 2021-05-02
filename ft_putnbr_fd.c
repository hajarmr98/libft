/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 13:40:30 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/01 13:45:27 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbpos;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbpos = (unsigned int)(nb * -1);
	}
	else
		nbpos = (unsigned int)(nb);
	if (nbpos >= 10)
	{
		ft_putnbr_fd(nbpos / 10, fd);
		ft_putnbr_fd(nbpos % 10, fd);
	}
	else
		ft_putchar_fd('0' + nbpos, fd);
}
