/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:51:05 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/02 12:26:09 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

int main(int argc, char **argv);
void ft_error();
char **ft_get_array(int argc, char **argv);
void check(int argc, char **argv);
void check_empty(char **args);
void check_duplication(char **str);
void ft_myfree(char **result);
int check_sort(int argc, char **argv);
void ft_full_stack(int argc, char **argv, t_list **s);
void indexing(t_list **s);
int check_stack_sort(t_list *s);

//moves
void swap(t_list **s);
void sa(t_list **a);
void sb(t_list **b);
void ss(t_list **a, t_list **b);
void push(t_list **dest, t_list **src);
void pa(t_list **a, t_list **b);
void pb(t_list **a, t_list **b);
void reverse(t_list **s);
void ra(t_list **a);
void rb(t_list **b);
void rr(t_list **a, t_list **b);
void reverse_rotate(t_list **s);
void rra(t_list **a);
void rrb(t_list **b);
void rrr(t_list **a, t_list **b);
#endif