/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:27:06 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 12:21:25 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*news1;
	unsigned char	*news2;

	i = 0;
	news1 = (unsigned char *)&s1[i];
	news2 = (unsigned char *)&s2[i];
	while ((*news1 != '\0' || *news2 != '\0') && n > 0)
	{
		if (*news1 > *news2)
		{
			return (1);
		}
		else if (*news1 < *news2)
		{
			return (-1);
		}
		news1++;
		news2++;
		n--;
	}
	return (0);
}
