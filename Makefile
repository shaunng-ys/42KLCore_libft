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

MY_VAR =  this is a string

MY_OTHER_VAR = hello $(MY_VAR)

MY_OTHER_VAR += "Bye !"

NAME = my_prog

MY_SOURCES = 	ft_putchar.c \
		ft_putstr.c \
		main.c

MY_OBJECTS = $(MY_SOURCES: .c = .o)

CFLAGS += -Wall

CUR_DIR = $(shell pwd)

$(NAME):	$(MY_OBJECTS)
		cc -o $(NAME) $(MY_OBJECTS)

a_prog:	ft_putchar.o main.o
	cc -o this prog ft_putchar.o main.o

my_rule:	sub_rule
		echo I will compile my files $(MY_SOURCES)

sub_rule:
		echo This is my rule, in $(CUR_DIR)

all:

clean:

fclean:

re:

bonus:
