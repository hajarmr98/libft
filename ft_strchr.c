/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 16:49:07 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/01/24 14:17:14 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	l;
	size_t	i;

	l = c;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}
