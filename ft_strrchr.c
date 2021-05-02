/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 13:56:46 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 16:30:14 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	l;
	size_t	i;
	size_t	len;

	l = (char)c;
	i = ft_strlen(s);
	len = i + 1;
	while (i >= 0 && i < len)
	{
		if (s[i] == l)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
