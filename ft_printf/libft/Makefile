# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wng <winniewing025@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 14:30:49 by wng               #+#    #+#              #
#    Updated: 2025/02/12 23:19:57 by wng              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAG = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	  ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			ft_lstclear.c ft_lstiter.c ft_lstmap.c 

SRCS := $(SRC:.c=.o)

SRCS_BONUS := $(BONUS_SRC:.c=.o)

all : $(NAME)

%.o: %.c
		gcc $(CFLAG) -c $< -o $@

$(NAME): $(SRCS)
		ar -rcs $(NAME) $(SRCS)

bonus: $(SRCS) $(SRCS_BONUS)
	ar rcs $(NAME) $^

clean :
		rm -f $(SRCS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re