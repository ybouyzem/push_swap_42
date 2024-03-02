/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:21:36 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/02 12:26:50 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int get_higher_index(t_list *s)
{
    t_list *tmp;
    int higher;

    tmp = s;
    higher = tmp->index;
    while (tmp)
    {
        if (tmp->index > higher)
            higher = tmp->index;
        tmp = tmp->index;
    }
    return (higher);
}

void sort2(t_list **a)
{
    if ((*a)->content > (*a)->next->content)
        sa(a);
}

void sort3(t_list **a)
{
    int higher;

    higher = get_higher_index(*a);
    if ((*a)->index == higher)
        ra(a);
    else if ((*a)->next->index == higher)
        rra(a);
    if ((*a)->content > (*a)->next->content)
        sa(a);
}

void sort5(t_list **a, t_list **b)
{
    int i;
    int pushed;
    int size;

    i = 0;
    pushed = 0;
    size = ft_lstsize(*a);
    while ((size - pushed) > 3 && i < size)
    {
        if ((*a)->index < 2)
        {
            pb(a, b);
            pushed++;
        }
        else
            ra(a);
        i++;
    }
    sort3(a);
    if (check_stack_sort(*b))
        rb(b);
    pa(a, b);
    pa(a, b);
}