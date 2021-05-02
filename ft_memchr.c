/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:17:49 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 13:54:03 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*news;
	unsigned char	h;

	i = 0;
	news = (unsigned char *)&s[i];
	h = (unsigned char)c;
	while (i < n)
	{
		if (h == news[i])
			return (&news[i]);
		i++;
	}
	return (0);
}
