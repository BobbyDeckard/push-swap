# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/29 11:52:28 by imeulema          #+#    #+#              #
#    Updated: 2024/11/29 11:59:24 by imeulema         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wextra -Wall -Werror
RM = rm
RMFLAGS = -f
SRCS =
OBJS = $(SRCS:.c=.o)
HEADERS = push_swap.h
LIBRARY = libft/libft.a
MAKE = make

all: $(LIBRARY) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIBRARY) $?
	cp $(LIBRARY) $(NAME)

%.o: %.c $(HEADERS) $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBRARY):
	cd libft && $(MAKE)

clean:
	$(RM) $(RMFLAGS) $(OBJS)
	cd libft && $(MAKE) clean

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
	cd libft && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
