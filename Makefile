# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:54:16 by ybouyzem          #+#    #+#              #
#    Updated: 2024/03/04 00:39:37 by ybouyzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT := mandatory/libft_42/ft_isalpha.c mandatory/libft_42/ft_isdigit.c mandatory/libft_42/ft_isalnum.c mandatory/libft_42/ft_isascii.c mandatory/libft_42/ft_isprint.c mandatory/libft_42/ft_strlen.c mandatory/libft_42/ft_memset.c \
	mandatory/libft_42/ft_bzero.c mandatory/libft_42/ft_memcpy.c mandatory/libft_42/ft_strlcpy.c mandatory/libft_42/ft_strlcat.c mandatory/libft_42/ft_toupper.c mandatory/libft_42/ft_tolower.c mandatory/libft_42/ft_strchr.c \
	mandatory/libft_42/ft_strrchr.c mandatory/libft_42/ft_strncmp.c mandatory/libft_42/ft_memchr.c mandatory/libft_42/ft_memcmp.c mandatory/libft_42/ft_strnstr.c mandatory/libft_42/ft_atoi.c mandatory/libft_42/ft_calloc.c mandatory/libft_42/ft_strdup.c \
	mandatory/libft_42/ft_substr.c mandatory/libft_42/ft_strjoin.c mandatory/libft_42/ft_strtrim.c mandatory/libft_42/ft_split.c mandatory/libft_42/ft_itoa.c mandatory/libft_42/ft_strmapi.c mandatory/libft_42/ft_striteri.c mandatory/libft_42/ft_putchar_fd.c \
	mandatory/libft_42/ft_putstr_fd.c mandatory/libft_42/ft_putendl_fd.c mandatory/libft_42/ft_putnbr_fd.c mandatory/libft_42/ft_lstadd_back_bonus.c mandatory/libft_42/ft_lstadd_front_bonus.c \
	mandatory/libft_42/ft_lstnew_bonus.c mandatory/libft_42/ft_lstlast_bonus.c mandatory/libft_42/ft_lstsize_bonus.c

GET_NEXT_LINE := bonus/get_next_line/get_next_line.c bonus/get_next_line/get_next_line_utils.c \

MOVES := mandatory/moves/push.c mandatory/moves/reverse_rotate.c mandatory/moves/reverse.c mandatory/moves/swap.c

SORTING := mandatory/sorting/sort.c mandatory/sorting/sort_utils.c

C_FILES := mandatory/utils.c mandatory/parssing.c $(LIBFT) $(MOVES) $(SORTING) \

C_BONUS := $(GET_NEXT_LINE)

OBJS := $(C_FILES:.c=.o)
OBJS_BONUS := $(C_BONUS:.c=.o)

NAME = push_swap.a
NAME_BONUS = push_swap_bonus.a
HEADER = mandatory/push_swap.h mandatory/libft_42/libft.h 


all : $(NAME) $(HEADER)
	@cc -Wall -Wextra -Werror mandatory/push_swap.c  $(NAME) -o push_swap

%.o : %.c $(HEADER)
	@cc -Wall -Wextra -Werror -c $< -o $@

$(NAME) : $(OBJS) $(HEADER)
	@ar rc $(NAME) $(OBJS)

$(NAME_BONUS) : $(OBJS_BONUS) bonus/checker.h
	@ar rc $(NAME_BONUS) $(OBJS_BONUS)

bonus : $(NAME_BONUS) bonus/checker.h
	@cc -Wall -Wextra -Werror bonus/checker.c $(NAME_BONUS) -o checker

clean :
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)
	
re : fclean all

.PHONY : clean