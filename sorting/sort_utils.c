/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 23:32:14 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 01:22:22 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void push_a_to_b(t_list **a, t_list **b, int delimeter)
{
    int i;
    i = 0;

    while (ft_lstsize(*a) > 0)
    {
        if ((*a)->index <= i)
        {
            pb(a, b);
            i++;
        }
        else if ((*a)->index <= (i + delimeter))
        {
            pb(a, b);
            rb(b);
            i++;
        }
        else 
            ra(a);
    }
}

int ft_check(t_list *b, int index)
{
    int size;
    int i;
    t_list *tmp;

    size = ft_lstsize(b);
    i = 0;
    tmp = b;
    while (i < size / 2 && tmp)
    {
        if (index == tmp->index)
            return (1);
        tmp = tmp->next;
        i++;
    }
    return (0);
}

void turn_to_a(t_list **a, t_list **b)
{
    //a = NULL;
    int max_index = get_higher_index(*b);
    while (ft_lstsize(*b) > 0)
    {
        if (*b && (*b)->index == max_index)
        {
            pa(a, b);
            max_index--;
        }
        else if ((*b)->next->index == max_index)
        {
            sb(b);
            pa(a, b);
            max_index--;
        }
        else
        {
            if (!ft_check(*b, max_index))
            {
                rrb(b);
            }
            else
            {
                rb(b);
            }    
        }
    }
}