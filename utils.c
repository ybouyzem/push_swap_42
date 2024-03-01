/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:05:40 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/01 11:34:37 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_myfree(char **result)
{
    int i;
    i = 0;
    while (result[i])
        free(result[i++]);
    free(result);
}

void ft_free_stack(stack *a)
{
    stack *tmp;
    
    tmp = a;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        free(a);
        a = tmp;
    }
    free(a);
}

char **ft_get_array(int argc, char **argv)
{
    int i;
    char **array;
    char *arguments;

    i = 1;
    arguments = NULL;
    while (i < argc)
    {
        arguments = ft_strjoin(arguments, argv[i++]);
        arguments = ft_strjoin(arguments, " ");
    }
    array = ft_split(arguments,' ');
    free(arguments);
    return (array);
}