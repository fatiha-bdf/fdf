# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/11 11:49:15 by fboudyaf          #+#    #+#              #
#    Updated: 2019/03/19 14:21:03 by fboudyaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
LDFLAGS	= -L.
LDLIBS	= -lft
SRC = ft_bzero.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_itoa.c\
		ft_memalloc.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memdel.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strncat.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strrchr.c\
		ft_strsplit.c\
		ft_strstr.c\
		ft_strnstr.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_atoi.c\
		ft_lstnew.c\
		ft_lstdel.c\
		ft_lstadd.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstdelone.c\
		ft_isspace.c\
		ft_swap.c\
		ft_swap_str.c\
		ft_sqrt.c\
		ft_recursive_factorial.c\
		ft_foreach.c\
		ft_count_words.c\
		get_next_line.c\
		ft_strlen_sep.c

OBJ = $(SRC:.c=.o)

INC = ./inc/

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

%.o: %.c
		$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all


.PHONY: clean clean
