# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmrabet- <hmrabet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/23 15:55:20 by hmrabet-          #+#    #+#              #
#    Updated: 2021/05/02 12:41:33 by hmrabet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
CFLAGS=-Wall -Wextra -Werror
SRC=ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_atoi.c ft_strncmp.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c ft_strtrim.c ft_split.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
OBJ=ft_strlcpy.o ft_strlen.o ft_strnstr.o ft_strchr.o ft_strrchr.o ft_strlcat.o ft_atoi.o ft_strncmp.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o ft_memchr.o ft_memcmp.o ft_calloc.o ft_strdup.o ft_substr.o ft_strtrim.o ft_split.o ft_strjoin.o ft_itoa.o ft_strmapi.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o
INCL=libft.h
NAME=libft.a

%.o: %.c $(INCL)
	$(CC) -c -o $@ $< $(CFLAGS)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.PHONY: clean fclean re norma

clean:
	rm -f $(NAME)
fclean:
	rm -f $(NAME) $(OBJ)

re: fclean
	$(MAKE)
norma:
	norminette $(SRC) $(INCL)
