# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albertga <albertga@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 14:06:53 by albertga          #+#    #+#              #
#    Updated: 2023/10/24 14:10:29 by albertga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 			libft.a

CC = 			gcc

CFLAGS = 		-c -Wall -Wextra -Werror

CLEAN = 		rm -rf

SRC = 			ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
				ft_isprint.c ft_strlen.c ft_bzero.c ft_toupper.c\
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
				ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
				ft_memmove.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c\
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
				ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
						ft_putnbr_fd.c ft_itoa.c ft_split.c\
	
SRCBONUS = 		ft_lstnew_bonus.c ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c ft_lstiter_bonus.c\
						ft_lstmap_bonus.c\

OBJS := 		$(SRC:.c=.o)

OBJSBONUS := 	$(SRCBONUS:.c=.o)

all: 			$(NAME)

$(OBJS):		%.o: %.c
				@$(CC) $(CFLAGS) $< -o $@

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)

$(OBJSBONUS):	%.o: %.c
				@$(CC) $(CFLAGS) $< -o $@

bonus:			$(OBJSBONUS)
				@ar rcs $(NAME) $(OBJSBONUS)

clean:
				@$(CLEAN) ./*.o

fclean: 		clean
				@$(CLEAN) ./*.a

re: 			fclean all

.PHONY: 		all clean fclean re bonus