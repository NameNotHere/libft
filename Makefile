# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 17:16:14 by otanovic          #+#    #+#              #
#    Updated: 2024/11/29 13:15:08 by otanovic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c ft_calloc.c ft_memcmp.c ft_strrchr.c ft_strchr.c ft_bzero.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_bzero.c ft_strdup.c ft_strncmp.c ft_strnstr.c ft_tolower.c \
		ft_toupper.c ft_strjoin.c ft_split.c ft_strtrim.c ft_memcpy.c ft_substr.c ft_itoa.c ft_memchr.c \
		ft_strmapi.c ft_striteri.c ft_putcharfd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c
OBJ = $(SRC:.c=.o)
BONUSOBJ = $(BONUS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $(OBJ)

bonus: $(NAME) $(BONUSOBJ)
	ar -rcs $(NAME) $(BONUSOBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
