/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 20:44:35 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/01/24 13:27:31 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char	*haystack, const char *needle, size_t len){
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while ((haystack[i] != '\0') && ((i + 2) < len))
	{
		j = 0;
		if(haystack[i] == needle[j])
		{
			while ((needle[j] != '\0') && (haystack[i + j] == needle[j]))
			{
				j++;

			}
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		} else
		{
			i++;
		}
	}
	return (0);
}