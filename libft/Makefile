# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phkevin <phkevin@student.42luxembourg      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 12:48:38 by phkevin           #+#    #+#              #
#    Updated: 2024/02/19 12:48:45 by phkevin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

FILES	=	ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strlen.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUS	=	ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

CC		=	cc
FLAGWS	=	-Wall -Wextra -Werror
AR		=	ar rcs
RM		=	/bin/rm -f

OBJS_DIR	=	./
OBJS		=	$(addprefix $(OBJS_DIR), $(FILES:.c=.o))

BONUS_DIR	=	./
BONUS_OBJS	= $(addprefix $(BONUS_DIR), $(BONUS:.c=.o))

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGWS) -c -o $@ $<

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(BONUS_OBJS)
	$(AR) $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS): $(BONUS_DIR)%.o : $(BONUS_DIR)%.c
	$(CC) $(FLAGWS) -c -o $@ $<

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
