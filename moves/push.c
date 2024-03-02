/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 19:24:15 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/02 11:17:35 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push(t_list **dest, t_list **src)
{
    t_list *to_push;

    to_push = *src;
    if (*src == NULL)
        return ;
    *src = (*src)->next;
    to_push->next = NULL;
    ft_lstadd_front(dest, to_push);
}

void pa(t_list **a, t_list **b)
{
    write(1, "pa\n", 3);
    push(a, b);
}

void pb(t_list **a, t_list **b)
{
    write(1, "pb\n", 3);
    push(b, a);
}