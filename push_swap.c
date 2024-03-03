/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:53:45 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 01:06:02 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void leaks()
{
    system("leaks push_swap");
}

void ft_print_stack(t_list *a)
{
    t_list *tmp;

    tmp = a;
    while (tmp)
    {
        printf("Index : %d ==> %d\n", tmp->index, (int)tmp->content);
        tmp = tmp->next;
    }
}

void ft_error()
{
    write(2, "Error\n", 6);
    exit(1);
}

int main(int argc, char **argv)
{
    t_list *a;
    t_list *b;

    a = NULL;
    b = NULL;
    if (argc == 1)
        return (0);
    check(argc, argv);
    if (check_sort(argc, argv))
        return (0);
    ft_full_stack(argc, argv, &a);
    indexing(&a);
    sort(&a, &b);
    //ft_print_stack(a);
    
    //atexit(leaks);
}