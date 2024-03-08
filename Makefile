# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:54:16 by ybouyzem          #+#    #+#              #
#    Updated: 2024/03/08 21:25:56 by ybouyzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft_42/ft_isalpha.c libft_42/ft_isdigit.c libft_42/ft_isalnum.c libft_42/ft_isascii.c libft_42/ft_isprint.c libft_42/ft_strlen.c libft_42/ft_memset.c \
	libft_42/ft_bzero.c libft_42/ft_memcpy.c libft_42/ft_strlcpy.c libft_42/ft_strlcat.c libft_42/ft_toupper.c libft_42/ft_tolower.c libft_42/ft_strchr.c \
	libft_42/ft_strrchr.c libft_42/ft_strncmp.c libft_42/ft_memchr.c libft_42/ft_memcmp.c libft_42/ft_strnstr.c libft_42/ft_atoi.c libft_42/ft_calloc.c libft_42/ft_strdup.c \
	libft_42/ft_substr.c libft_42/ft_strjoin.c libft_42/ft_strtrim.c libft_42/ft_split.c libft_42/ft_itoa.c libft_42/ft_strmapi.c libft_42/ft_striteri.c libft_42/ft_putchar_fd.c \
	libft_42/ft_putstr_fd.c libft_42/ft_putendl_fd.c libft_42/ft_putnbr_fd.c libft_42/ft_lstadd_back_bonus.c libft_42/ft_lstadd_front_bonus.c \
	libft_42/ft_lstnew_bonus.c libft_42/ft_lstlast_bonus.c libft_42/ft_lstsize_bonus.c

GET_NEXT_LINE = get_next_line/get_next_line.c get_next_line/get_next_line_utils.c \

MOVES = mandatory/moves/push.c mandatory/moves/reverse_rotate.c mandatory/moves/rotate.c mandatory/moves/swap.c \

MOVES_BONUS = bonus/moves/push_bonus.c bonus/moves/reverse_rotate_bonus.c bonus/moves/rotate_bonus.c bonus/moves/swap_bonus.c \

SORTING = mandatory/sorting/sort.c mandatory/sorting/sort_utils.c

C_FILES =  mandatory/push_swap.c mandatory/utils.c mandatory/parssing.c $(LIBFT) $(MOVES) $(SORTING) \

C_BONUS = bonus/checker.c $(GET_NEXT_LINE) $(MOVES_BONUS) $(LIBFT) bonus/parssing_bonus.c  bonus/parssing_utils_bonus.c \
	bonus/utils_bonus.c

OBJS = $(C_FILES:.c=.o)
OBJS_BONUS = $(C_BONUS:.c=.o)

NAME = push_swap
NAME_BONUS = checker
HEADER = mandatory/push_swap.h libft_42/libft.h 


$(NAME) : $(OBJS)
	@cc -Wall -Wextra -Werror -fsanitize=address $(OBJS) -o push_swap

$(NAME_BONUS) : $(OBJS_BONUS) 
	@cc -Wall -Wextra -Werror -fsanitize=address $(OBJS_BONUS) -o checker

%.o : %.c mandatory/push_swap.h bonus/checker.h
	@cc -Wall -Wextra -Werror -fsanitize=address  -o $@ -c $<

all : $(NAME)

bonus : $(NAME_BONUS)

clean :
	@rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	@rm -f $(NAME) $(NAME_BONUS)
	
re : fclean all

.PHONY : clean