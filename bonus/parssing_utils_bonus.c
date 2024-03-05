/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 01:12:41 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/05 01:42:11 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

void ft_check_moves(char *str)
{
    if (ft_strcmp(str, "sa\n") 
    || ft_strcmp(str, "sb\n")
    || ft_strcmp(str, "ss\n")
    || ft_strcmp(str, "pa\n")
    || ft_strcmp(str, "pb\n")
    || ft_strcmp(str, "ra\n")
    || ft_strcmp(str, "rb\n")
    || ft_strcmp(str, "rr\n")
    || ft_strcmp(str, "rra\n")
    || ft_strcmp(str, "rrb\n")
    || ft_strcmp(str, "rrr\n")
    )
    return (free(str), ft_error());
}

