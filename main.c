/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:54:59 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/05/02 18:49:36 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char ft_funcion(unsigned int po, char lo)
{
	printf("%i\n", po);
	printf("%i\n", po + lo);
	return (po + lo);
}

int main(){
	// const char *str;

	// char st[] = "This is my modifiable string";
	
	// char dest[] = "Hola soy la cadena más larga";
	// char src[] = "hey soul wsis";
	char	*dest;
	memset(dest, 'r', 6);
	dest[14] = 'a';
	// char src[] = "Hola soy la cadena más larga que se me ha podido ocurrir";

	// str = "Whcat can make me feel this Way";

	// str = "  --123440HCHBD345678";

	// printf("%lu\n", ft_strlen(str));
	// printf("%lu\n", strlen(str));

	// printf("%lu\n", strlcpy(dest, src, 8));
	// printf("%lu\n", ft_strlcpy(dest, src, 8));

	// printf("%lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
	// printf("%lu\n", strlcat(dest, "lorem ipsum dolor sit amet", 15));
	// printf("%s\n", dest);

	// printf("%p\n", ft_strchr(str, 'W'));
	// printf("%p\n", strchr(str, 'W'));

	// printf("%s\n", ft_strrchr("bonjour", 's'));
	// printf("%s\n", strrchr("bonjour", 's'));

	// printf("%s\n", ft_strnstr(str, "can", 8));
	// printf("%s\n",strnstr(str, "can", 8));

	// printf("%i\n", ft_atoi(str));
	// printf("%i\n", atoi(str));

	// printf("%i\n", ft_strncmp("test\200", "test\0", 6));
	// printf("%i\n", strncmp("test\200", "test\0", 6));

	// printf("%i\n", isalpha('M'));
	// printf("%i\n", ft_isalpha('M'));


	// printf("%i\n", isdigit('19'));
	// printf("%i\n", ft_isdigit('19'));

	// printf("%i\n", isalnum('?'));
	// printf("%i\n", ft_isalnum('?'));

	// printf("%i\n", isascii('भारत'));
	// printf("%i\n", ft_isascii('भारत'));

	// printf("%i\n", isprint(126));
	// printf("%i\n", ft_isprint(126));

	// printf("%c\n", toupper('%'));
	// printf("%c\n", ft_toupper('%'));

	// printf("%c\n", tolower('a'));
	// printf("%c\n", ft_tolower('a'));

	// void *
    //  memset(void *b, int c, size_t len);

	// printf("%s\n", memset(st, 35, 15));
	// printf("%s\n", ft_memset(st, 35, 15));
	// printf("%s\n", st);

	// printf("%s\n", bzero(st, 15));
	// printf("%s\n", ft_bzero(st, 15));
	// printf("%s\n", dest);
	// printf("%s\n", memcpy(&dest[0], &dest[5], 10));
	// printf("%s\n", ft_memcpy(dest, src, 2));

	// printf("%s\n", memccpy(dest, src, 's' , 5));
	// printf("%s\n", ft_memccpy(dest, src, 's' , 5)); 

	//printf("%s\n", memmove(&dest[5], &dest[6], 10));
	//printf("%s\n", ft_memmove(&dest[5], &dest[6], 10));

	// printf("%s\n", memchr(dest, 'c', 10));
	// printf("%s\n", ft_memchr(dest, 'c', 10));
	
	// int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	
	// printf("%s\n", memchr(tab, -1, 7));
	// printf("%s\n", ft_memchr(tab, -1, 7));
	
	// printf("%d\n", calloc(8, 8));
	// printf("%p\n", ft_calloc(8, 8));

	// printf("%s\n", ft_strdup("Fix you"));

	// printf("%s", ft_substr("Hola quiero helado", 5, 6));

	// printf("%s", ft_strjoin("Hola quiero helado", "Y no tengo"));

	printf("%s", ft_strtrim("aaaaaa", "\ta\n"));

	// char **res = ft_split("eHoeeela qeeeuieero heladoe", 'e');
	// printf("%s\n", res[0]);
	// printf("%s\n", res[1]);
	// printf("%s\n", res[2]);
	// printf("%s\n", res[3]);
	// printf("%s\n", res[4]);
	// ft_itoa(123);

	// printf("%s", ft_itoa(-123));

	// printf("%s", ft_strmapi("hola me llamo lola", &ft_funcion));

	// printf("%s", ft_strmapi("hola me llamo lola", &ft_funcion));
	
	

	// ft_putchar_fd('c', 1);

	// ft_putstr_fd("los chulos llevan motorola", 1);

	// ft_putendl_fd("los chulos llevan motorola", 1);

	// ft_putnbr_fd(-1526, -1);

   	return (0);
}
