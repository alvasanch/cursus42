# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/12 12:08:58 by alvasanc          #+#    #+#              #
#    Updated: 2023/12/18 14:25:20 by alvasanc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror 
SOURCE = ft_printf.c ft_putchar.c ft_putstr.c ft_puthexa.c ft_putdeci.c ft_printunint.c

OBJECTS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS) 
	ar crs $(NAME) $(OBJECTS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJECTS)

fclean: clean
		rm -f $(NAME)
		
re: fclean all

.PHONY: all clean fclean re