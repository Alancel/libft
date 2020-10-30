# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alancel <alancel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:22:08 by alancel           #+#    #+#              #
#    Updated: 2020/10/30 22:21:27 by alancel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRC		=	ft_isprint.c \
			ft_memset.c \
			ft_bzero.c \
			ft_strlcat.c \
			ft_calloc.c \
			ft_memccpy.c \
			ft_strlcpy.c \
			ft_tolower.c \
			ft_isalnum.c \
			ft_memchr.c \
			ft_toupper.c \
			ft_isalpha.c \
			ft_memcmp.c \
			ft_strncmp.c \
			ft_isascii.c \
			ft_memcpy.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_strlen.c \
			ft_isdigit.c \
			ft_memmove.c \
			ft_strdup.c \
			ft_strrchr.c \
			ft_atoi.c \
			ft_substr.c\
			ft_strjoin.c\
			ft_itoa.c\
			ft_putchar_fd.c\
			ft_putnbr_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_strmapi.c\
			ft_strtrim.c\
			ft_split.c\
			ft_lstnew_bonus.c\
			ft_lstadd_front_bonus.c\
			ft_lstsize_bonus.c\
			ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c\
			ft_lstdelone_bonus.c\
	

OBJS	=	$(SRC:.c=.o)

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

$(NAME)	:	$(OBJS)
	gcc -c $(SRC) libft.h
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all