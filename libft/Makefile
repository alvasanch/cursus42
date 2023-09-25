# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/18 14:20:04 by alvasanc          #+#    #+#              #
#    Updated: 2023/09/25 15:51:44 by alvasanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCE = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strlcpy.c ft_strlen.c ft_atoi.c ft_strchr.c ft_strlcat.c \
		ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

clean:
				rm -f $(OBJECTS)
				
fclean: clean
				rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re