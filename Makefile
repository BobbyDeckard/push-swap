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
SRCS = main.c \
	   srcs/utils.c
OBJS = $(SRCS:.c=.o)
HEADERS = incl/push_swap.h
LIBRARY = srcs/libft/libft.a
MAKE = make

all: $(LIBRARY) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LIBRARY) $?
	cp $(LIBRARY) $(NAME)

%.o: %.c $(HEADERS) $(LIBRARY)
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBRARY):
	cd srcs/libft && $(MAKE)

clean:
	$(RM) $(RMFLAGS) $(OBJS)
	cd srcs/libft && $(MAKE) clean

fclean: clean
	$(RM) $(RMFLAGS) $(NAME)
	cd srcs/libft && $(MAKE) fclean

re: fclean all

.PHONY: all clean fclean re
