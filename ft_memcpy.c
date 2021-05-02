/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 18:27:06 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 12:16:56 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*newdest;
	unsigned char	*newsrc;

	i = 0;
	newdest = (unsigned char *)&dst[i];
	newsrc = (unsigned char *)&src[i];
	while (i < n)
	{
		newdest[i] = newsrc[i];
		i++;
	}
	return (dst);
}
