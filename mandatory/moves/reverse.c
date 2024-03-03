/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:39:55 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 04:18:44 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse(t_list **s)
{
	t_list	*tmp;

	if (ft_lstsize(*s) > 1)
	{
		tmp = *s;
		*s = (*s)->next;
		tmp->next = NULL;
		ft_lstadd_back(s, tmp);
	}
}

void	ra(t_list **a)
{
	write(1, "ra\n", 3);
	reverse(a);
}

void	rb(t_list **b)
{
	write(1, "rb\n", 3);
	reverse(b);
}

void	rr(t_list **a, t_list **b)
{
	write(1, "rr\n", 3);
	ra(a);
	rb(b);
}
