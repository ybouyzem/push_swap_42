/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:51:05 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/01 11:25:39 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

typedef struct t_list {
    int content;
    int index;
    struct t_list *next;
} stack;

int main(int argc, char **argv);
void ft_error();
char **ft_get_array(int argc, char **argv);
void check(int argc, char **argv);
void check_empty(char **args);
void check_duplication(char **str);
void ft_myfree(char **result);
int check_sort(int argc, char **argv);
void ft_free_stack(stack *a);
#endif