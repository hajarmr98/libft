/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:08:09 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/04/25 21:28:06 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int     number_len(int n)
{
    int len;
	
	len = 0;
    if (n <= 0)
        ++len;
    while (n != 0)
    {
        n = n / 10;
        ++len;
    }
    return (len);
}
 
char    *ft_itoa(int n)
{
    char *result;
    int len;
 
    len = number_len(n);
    result = malloc(sizeof(char) * (len + 1));
    result[len] = '\0';
 
    if (n == 0)
		result[0] = '0';
    else if (n < 0)
        result[0] = '-';
    while (n != 0)
    {
        --len;
		if (n > 0)
        	result[len] = n % 10 + '0';
		else
			result[len] = (-1 * (n % 10)) + '0';
        n = n / 10;
    }
    return (result);
}