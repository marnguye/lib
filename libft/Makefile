# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marnguye <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 13:17:22 by marnguye          #+#    #+#              #
#    Updated: 2023/11/01 13:17:24 by marnguye         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

CFLAGS 	= 	-Wall -Werror -Wextra

CC		= 	cc

RM 	= 	rm -f

SRC 	= 	ft_atoi.c ft_bzero.c				\
			ft_calloc.c ft_isalnum.c				\
			ft_isalpha.c ft_isascii.c			\
			ft_isdigit.c ft_isprint.c			\
			ft_itoa.c ft_memchr.c				\
			ft_memcmp.c ft_memcpy.c			\
			ft_memmove.c ft_memset.c			\
			ft_putchar_fd.c ft_putendl_fd.c		\
			ft_putnbr_fd.c ft_putstr_fd.c		\
			ft_strchr.c ft_striteri.c			\
			ft_strjoin.c ft_strlcat.c			\
			ft_strlcpy.c ft_strlen.c			\
			ft_strncmp.c ft_strmapi.c			\
			ft_strnstr.c ft_strrchr.c			\
			ft_strtrim.c ft_substr.c			\
			ft_tolower.c ft_toupper.c			\

OBJS 		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
		@$(CC) $(FLAGS) -c $< -o $@

clean:
		@$(RM) $(OBJS)

fclean:
		@$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY: all, bonus, clean, fclean, re
