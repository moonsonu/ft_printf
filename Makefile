# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksonu <ksonu@student.42.us.org>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/29 17:16:50 by ksonu             #+#    #+#              #
#    Updated: 2018/06/13 18:48:24 by ksonu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =  ft_printf.c

LIBSRC = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c	\
		ft_memmove.c	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_strdup.c		\
		ft_strcpy.c		\
		ft_strncpy.c	\
		ft_strcat.c		\
		ft_strncat.c	\
		ft_strlcat.c	\
		ft_strchr.c		\
		ft_strrchr.c	\
		ft_strstr.c		\
		ft_strnstr.c	\
		ft_strcmp.c		\
		ft_strncmp.c	\
		ft_atoi.c		\
		ft_isalpha.c	\
		ft_isdigit.c	\
		ft_isalnum.c	\
		ft_isascii.c	\
		ft_isprint.c	\
		ft_toupper.c	\
		ft_tolower.c	\
		ft_memalloc.c	\
		ft_memdel.c		\
		ft_strnew.c		\
		ft_strdel.c		\
		ft_strclr.c		\
		ft_striter.c	\
		ft_striteri.c	\
		ft_strmap.c		\
		ft_strmapi.c	\
		ft_strequ.c		\
		ft_strnequ.c	\
		ft_strsub.c		\
		ft_strjoin.c	\
		ft_strtrim.c	\
		ft_strsplit.c	\
		ft_itoa.c		\
		ft_putchar.c	\
		ft_putstr.c		\
		ft_putendl.c	\
		ft_putnbr.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c	\
		ft_lstnew.c		\
		ft_lstdelone.c	\
		ft_lstdel.c		\
		ft_lstadd.c		\
		ft_lstiter.c	\
		ft_lstmap.c		\
		ft_counter.c	\
		ft_string.c		\
		ft_itoa_len.c	\
		ft_whtspace.c	\
		ft_swap.c		\
		ft_splitdel.c	\
		ft_wdcount.c	\
		get_next_line.c	\
		ft_atoi_base.c	\
		ft_rgb.c

SRCS = $(addprefix srcs/, $(SRC))
LIBSRCS = $(addprefix libft/, $(LIBSRC))
HEADER = -I includes

OBJ = $(SRCS:.c=.o)
LIBOBJ = $(LIBSRCS:.c=.o)
OBJDIR = objs

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

NAME = ft_printf.a

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all: $(NAME)

$(OBJ): %.o: %.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(HEADER) $< -o $@

$(LIBOBJ): %.o: %.c
	@$(CC) $(CFLAGS) $(HEADER) $< -o $@

$(NAME): $(OBJ) $(LIBOBJ)
	@ar rcs $@ $^
	@ranlib $@
	@echo "\x1b[32;1m[나는 예쁘다!😘]\x1b[0m"

clean:
	@/bin/rm -rf $(OBJ) $(LIBOBJ)
	@echo "\x1b[35;1m[아니다!]\x1b[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\x1b[31m[못났다!]\x1b[0m"

re: fclean all
