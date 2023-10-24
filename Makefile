# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/08 14:08:01 by lroman-p          #+#    #+#              #
#    Updated: 2023/10/08 15:58:22 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBRARY_NAME = libt.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

LIB1 = ar -rcs
LIB2 = ranlib
RM = /bin/rm -f

NAME = libft.a

INClUDE = libft.h
SCRS = ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
	   ft_isprint.c	ft_strlen.c	ft_memset.c	ft_bzero.c	ft_memcpy.c\
	   ft_memmove.c	ft_strlcpy.c	ft_strlcat.c	ft_toupper.c\
		ft_tolower.c	ft_strchr.c	ft_strrchr.c	ft_strmcmp.c\
	  	ft_memchr.c	ft_memcmp.c	ft_strnstr.c	ft_atoi.c\
		ft_calloc.c	ft_strdup.c	ft_substr.c	ft_strjoin.c\
		ft_strtrim.c	ft_split.c	ft_itoa.c	ft_strmapi.c\
		ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c\
		ft_putendl_fd.c	ft_putnbr_fd.c
OBJ = $(SCRS:.c=.o)
BONUS_S = ft_lsnew.c	ft_lstadd_front.c	ft_lstsize.c\
		  ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
		  ft_lstclear.c	ft_iter.c ft_lstmap.c
BONUS_0 = $(BONUS_S;.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)	$(INCLUDE)
	$(LIB1)	$(NAME)	$(BONUS_O)
	$(LIB2)	$(NAME)

.c.o:
	$(CC)	$(CFLAGS)	-I$(INCLUDE)	-c	$<	-o	$(<:.c=.o)

clean:
	$(RM)	$(OBJS)	$(BONUS_O)

Fclean:	clean
	$(RM)	$(NAME)

re:	fclean	bonus

.PHONY:	all	clean	fclean	re	bonus	rebonus
