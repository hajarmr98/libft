/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 11:35:36 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 12:26:08 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	int					j;
	char				*new;

	i = 0;
	j = 0;
	new = malloc(sizeof(char *) * (len + 1));
	if (!new)
		return (0);
	while (i < (start + len) && s[i] != '\0')
	{
		if (i >= start)
		{
			new[j] = s[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}
