# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abao <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 13:39:34 by abao              #+#    #+#              #
#    Updated: 2018/07/21 13:50:54 by abao             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -g3
SRCSFILES = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strcat.c ft_strncat.c \
		ft_strlcat.c ft_strncpy.c ft_strchr.c ft_strrchr.c ft_strstr.c \
		ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_isalpha.c ft_isdigit.c \
		ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_atoi.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memmove.c \
		ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c \
		ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
		ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
		ft_itoa.c ft_putchar.c ft_putstr.c ft_putendl.c ft_putnbr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c\
		btree_apply_infix.c btree_apply_prefix.c btree_apply_suffix.c btree_create_node.c\
		btree_level_count.c btree_search_item.c \

SRCSDIR = ./
SRCS = $(addprefix $(SRCSDIR), $(SRCSFILES))
OBJS = $(SRCS:.c=.o)
HEADERS = libft.h
HEADERFLAGS = $(addprefix -I, $(dir $(HEADERS)))

SRCTEST = main_.c 
OBJTEST = $(SRCTEST:.c=.o)


all: $(NAME)
	
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) $(HEADERFLAGS) -c -o $@ $<

clean:
	/bin/rm -f $(OBJS)
	/bin/rm -rf a.out.dSYM

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: re fclean clean
