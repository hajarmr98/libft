/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 15:04:16 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 11:58:40 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_final(int sign, int final)
{
	if (sign == 1)
		final = -final;
	return (final);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	final;

	i = 0;
	final = 0;
	sign = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		final = final * 10;
		final = final + (int)(str[i] - '0');
		i++;
	}
	return (ft_final(sign, final));
}
