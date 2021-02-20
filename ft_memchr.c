/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 20:17:49 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/02/20 21:32:28 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*news;

	i = 0;
	news = (unsigned char *)&s[i];
	while (i < n)
	{
		if (c == news[i])
			return (&news[i]);
		i++;
	}
	return (0);
}
