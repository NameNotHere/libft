# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 17:16:14 by otanovic          #+#    #+#              #
#    Updated: 2024/11/24 16:06:03 by otanovic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#/* Missing functions: strchr, strrchr, strncmp, memchr, strnstr, atoi, calloc, strdup, substr, 
#strjoin, strtrim, split, itoa, strmapi, striteri, putchar_fd, putstr_fd, putendl_fd, putnbr_fd
#
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_calloc.c ft_memcmp.c ft_strchr.c bzero.c isalnum.c \
		isalpha.c isascii.c isdigit.c isprint.c memcpy.c memmove.c memset.c \
		strlcat.c strlcpy.c strlen.c bzero.c ft_strdup.c ft_strncmp.c ft_strstr.c ft_tolower.c \
		ft_toupper.c ft_strjoin.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
