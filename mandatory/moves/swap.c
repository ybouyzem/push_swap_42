/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:12:19 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 04:20:17 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list **s)
{
	t_list	*p1;
	t_list	*p2;

	p1 = NULL;
	p2 = NULL;
	if (*s && (*s)->next)
	{
		p1 = *s;
		*s = (*s)->next;
		p1->next = NULL;
		p2 = *s;
		*s = (*s)->next;
		p2->next = NULL;
		ft_lstadd_front(s, p1);
		ft_lstadd_front(s, p2);
	}
}

void	sa(t_list **a)
{
	write(1, "sa\n", 3);
	swap(a);
}

void	sb(t_list **b)
{
	write(1, "sb\n", 3);
	swap(b);
}

void	ss(t_list **a, t_list **b)
{
	write(1, "ss\n", 3);
	sa(a);
	sb(b);
}
