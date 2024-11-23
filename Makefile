# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shaun <sng@student.42kl.edu.my>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 16:01:44 by shaun             #+#    #+#              #
#    Updated: 2024/11/06 17:09:16 by shaun             ###   ########kl        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
NAME = libft.a
OBJS = ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o

all: $(OBJS)
		$(CC) main.c $(OBJS) -o $(NAME)

%.o: %c
		$(CC) -c $<

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME) 

re: fclean
		$(MAKE) all