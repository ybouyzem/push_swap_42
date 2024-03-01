/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:53:45 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/01 11:56:00 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void leaks()
{
    system("leaks push_swap");
}

void ft_error()
{
    write(2, "Error\n", 6);
    exit(1);
}

int main(int argc, char **argv)
{
    stack *a;
    stack *b;

    a = NULL;
    b = NULL;
    if (argc == 1)
        return (0);
    check(argc, argv);
    if (check_sort(argc, argv))
        return (0);
    //ft_free_stack(a);
    //ft_free_stack(b);
    //leaks();
    
}