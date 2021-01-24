/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:56:46 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/01/24 14:16:30 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	size_t	i;

	l = c;
	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}