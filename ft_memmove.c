/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 19:10:33 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/02/20 21:33:35 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*newdest;
	unsigned char	*newsrc;

	i = 0;
	newdest = (unsigned char *)&dst[i];
	newsrc = (unsigned char *)&src[i];
	if (newdest > newsrc)
	{
		while (len--)
			newdest[len] = newsrc[len];
	}
	else if (newdest < newsrc)
		ft_memcpy(dst, src, len);
	return (dst);
}
