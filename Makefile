# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agomez-c <agomez-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/05 11:26:54 by agomez-c          #+#    #+#              #
#    Updated: 2022/03/28 15:42:43 by agomez-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_memchr.c \
		ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c

OBJECTS = $(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJECTS) $(HEADS)
	gcc $(CFLAGS) -o $(NAME) $(SRCS)

all: $(NAME)

.PHONY: clean

clean :
	@rm -f $(OBJECTS)

fclean :
	@rm -f $(OBJECTS) $(NAME)

re: fclean all

