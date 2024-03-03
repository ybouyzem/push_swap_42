# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:54:16 by ybouyzem          #+#    #+#              #
#    Updated: 2024/03/03 03:53:54 by ybouyzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT := libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_strlen.c libft/ft_memset.c \
	libft/ft_bzero.c libft/ft_memcpy.c libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c \
	libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strnstr.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c \
	libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c libft/ft_putchar_fd.c \
	libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_lstadd_back_bonus.c libft/ft_lstadd_front_bonus.c \
	libft/ft_lstnew_bonus.c libft/ft_lstlast_bonus.c libft/ft_lstsize_bonus.c

MOVES := moves/push.c moves/reverse_rotate.c moves/reverse.c moves/swap.c

SORTING := sorting/sort.c sorting/sort_utils.c

C_FILES := push_swap.c utils.c parssing.c $(LIBFT) $(MOVES) $(SORTING)\

OBJS := $(C_FILES:.c=.o)

NAME = push_swap.a
HEADER = push_swap.h libft/libft.h


all : $(NAME) $(HEADER)
	@cc -Wall -Wextra -Werror push_swap.c  $(NAME) -o push_swap

%.o : %.c $(HEADER)
	@cc -Wall -Wextra -Werror -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
	@ar rc $(NAME) $(OBJS)

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)
	
re : fclean all

.PHONY : clean