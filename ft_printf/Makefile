# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wng <winniewing025@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/12 13:43:26 by wng               #+#    #+#              #
#    Updated: 2025/02/13 13:44:08 by wng              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c handle_conversions.c ft_printf_utils.c ft_printf_string_utils.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	make -C libft bonus
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

$(OBJS) : %.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

compile: $(OBJS)

clean: 
	make -C libft clean
	rm -f $(OBJS)

fclean : clean
	cd libft/ && rm -f libft.a
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
