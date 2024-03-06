/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:08:09 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/06 02:19:23 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../get_next_line/get_next_line.h"
# include "../libft_42/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

void	ft_error(void);
char	**ft_get_array(int argc, char **argv);
void	check(int argc, char **argv);
void	check_empty(char **argv);
void	check_duplication(int argc, char **str);
void	ft_myfree(char **result);
int		check_sort(int argc, char **argv);
void	ft_full_stack(int argc, char **argv, t_list **s);
void	indexing(t_list **s);
int		check_stack_sort(t_list *s);
void	swap(t_list **s);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	push(t_list **dest, t_list **src);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rotate(t_list **s);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	reverse_rotate(t_list **s);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
int		ft_strcmp(char *s1, char *s2);
void	ft_check_moves(char *str, t_list **a, t_list **b);
void	ft_free_stack(t_list *s);

#endif
