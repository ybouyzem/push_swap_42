# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:54:16 by ybouyzem          #+#    #+#              #
#    Updated: 2024/03/03 15:37:45 by ybouyzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT := libft_42/ft_isalpha.c libft_42/ft_isdigit.c libft_42/ft_isalnum.c libft_42/ft_isascii.c libft_42/ft_isprint.c libft_42/ft_strlen.c libft_42/ft_memset.c \
	libft_42/ft_bzero.c libft_42/ft_memcpy.c libft_42/ft_strlcpy.c libft_42/ft_strlcat.c libft_42/ft_toupper.c libft_42/ft_tolower.c libft_42/ft_strchr.c \
	libft_42/ft_strrchr.c libft_42/ft_strncmp.c libft_42/ft_memchr.c libft_42/ft_memcmp.c libft_42/ft_strnstr.c libft_42/ft_atoi.c libft_42/ft_calloc.c libft_42/ft_strdup.c \
	libft_42/ft_substr.c libft_42/ft_strjoin.c libft_42/ft_strtrim.c libft_42/ft_split.c libft_42/ft_itoa.c libft_42/ft_strmapi.c libft_42/ft_striteri.c libft_42/ft_putchar_fd.c \
	libft_42/ft_putstr_fd.c libft_42/ft_putendl_fd.c libft_42/ft_putnbr_fd.c libft_42/ft_lstadd_back_bonus.c libft_42/ft_lstadd_front_bonus.c \
	libft_42/ft_lstnew_bonus.c libft_42/ft_lstlast_bonus.c libft_42/ft_lstsize_bonus.c

MOVES := moves/push.c moves/reverse_rotate.c moves/reverse.c moves/swap.c

SORTING := sorting/sort.c sorting/sort_utils.c

C_FILES := push_swap.c utils.c parssing.c $(LIBFT) $(MOVES) $(SORTING)\

OBJS := $(C_FILES:.c=.o)

NAME = push_swap.a
HEADER = push_swap.h libft_42/libft.h


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