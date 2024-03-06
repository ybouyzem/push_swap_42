/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:24:15 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/05 23:06:47 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../checker.h"

void	push(t_list **dest, t_list **src)
{
	t_list	*to_push;

	to_push = *src;
	if (*src == NULL)
		return ;
	*src = (*src)->next;
	to_push->next = NULL;
	ft_lstadd_front(dest, to_push);
}

void	pa(t_list **a, t_list **b)
{
	push(a, b);
}

void	pb(t_list **a, t_list **b)
{
	push(b, a);
}
