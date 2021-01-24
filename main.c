/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 15:54:59 by hmrabet-          #+#    #+#             */
/*   Updated: 2021/01/24 17:31:15 by hmrabet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int main(){
	const char *str;
	// char dest[] = "Hola soy la cadena más larga que se me ha podido ocurrir";
	// const char src[] = "hey soul sis";

	str = "Whcat can make me feel this Way";

	// str = "  -+123440HCHBD345678";

	// printf("%lu\n", ft_strlen(str));
	// printf("%lu\n", strlen(str));

	// printf("%lu\n", strlcpy(dest, src, 8));
	// printf("%lu\n", ft_strlcpy(dest, src, 8));

	// printf("%lu\n", ft_strlcat(dest, src, 8));
	// printf("%lu\n", strlcat(dest, src, 8));

	// printf("%p\n", ft_strchr(str, 'W'));
	// printf("%p\n", strchr(str, 'W'));

	// printf("%s\n", ft_strrchr(str, 'W'));
	// printf("%s\n", strrchr(str, 'W'));

	// printf("%s\n", ft_strnstr(str, "can", 8));
	// printf("%s\n",strnstr(str, "can", 8));

	// printf("%i\n", ft_atoi(str));
	// printf("%i\n", atoi(str));

	// printf("%i\n", ft_strncmp(dest, src, 8));
	// printf("%i\n", strncmp(dest, src, 8));

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

	printf("%c\n", tolower('a'));
	printf("%c\n", ft_tolower('a'));

   return 0;
}