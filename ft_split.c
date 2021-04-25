/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:27:59 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/04/25 20:00:10 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cuenta(char const *s, char c)
{
	int		i;
	int		p;

	i = 0;
	p = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c) && (s[i + 1] != '\0'))
			p++;
		i++;
	}
	return (p);
}

void	ft_logic(char const *s, char c, char **new)
{
	int		i;
	int		l;
	int		e;
	int		size;

	e = 0;
	i = 0;
	l = 0;
	size = 0;
	while (s[i] != '\0')
	{
		l = 0;
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		e = i;
		while ((s[i] != c) && (s[i] != '\0'))
		{
			l++;
			i++;
		}
		new[size] = ft_substr((char *)s, e, l);
		size++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		len;

	len = ft_cuenta(s, c);
	new = malloc(sizeof(char *) * (len + 1));
	if (!(new))
		return (0);
	new[len] = NULL;
	ft_logic(s, c, new);
	return (new);
}
