/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:50:29 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/05 01:38:28 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	reverse_rotate(t_list **s)
{
	t_list	*head;
	t_list	*last;

	if (ft_lstsize(*s) > 1)
	{
		head = *s;
		last = ft_lstlast(*s);
		while (head->next->next != NULL)
		{
			head = head->next;
		}
		head->next = NULL;
		last->next = (*s);
		(*s) = last;
	}
}

void	rra(t_list **a)
{
	write(1, "rra\n", 4);
	reverse_rotate(a);
}

void	rrb(t_list **b)
{
	write(1, "rrb\n", 4);
	reverse_rotate(b);
}

void	rrr(t_list **a, t_list **b)
{
	write(1, "rrr\n", 4);
	reverse_rotate(a);
	reverse_rotate(b);
}
