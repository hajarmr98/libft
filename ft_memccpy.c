/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:48:04 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 13:28:30 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*newdest;
	unsigned char	*newsrc;

	i = 0;
	newdest = (unsigned char *)&dst[i];
	newsrc = (unsigned char *)&src[i];
	while (i < n)
	{
		if (c == newsrc[i])
		{
			newdest[i] = newsrc[i];
			return (&newdest[i + 1]);
		}
		else
			newdest[i] = newsrc[i];
		i++;
	}
	return (0);
}
