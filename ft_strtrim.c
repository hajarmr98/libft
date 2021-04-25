/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 12:37:08 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/04/25 13:21:35 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_loop1(char const *s1, char const *set)
{
	int		o;
	int		j;
	int		i;

	o = 0;
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		o = 0;
		while (set[j] != '\0')
		{
			if (set[j] == s1[i])
				o++;
			j++;
		}
		if (o == 0)
			break ;
		i++;
	}
	return (i);
}

int	ft_loop2(char const *s1, char const *set, int len)
{
	int		o;
	int		j;
	int		i;

	o = 0;
	i = 0;
	j = 0;
	while (s1[len - 1] != '\0')
	{
		j = 0;
		o = 0;
		while (set[j] != '\0')
		{
			if (set[j] == (s1[len - 1]))
				o++;
			j++;
		}
		if (o == 0)
			break ;
		len--;
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*new;

	len = ft_strlen(s1);
	new = malloc(sizeof(char *) * (len + 1));
	if (!(new))
		return (0);
	i = ft_loop1(s1, set);
	len = ft_loop2(s1, set, len);
	new = ft_substr((char *)s1, i, (len - i));
	return (new);
}
