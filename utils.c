/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:05:40 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/02 12:25:54 by ybouyzem         ###   ########.fr       */
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

void ft_full_stack(int argc, char **argv, t_list **s)
{
    char **array;
    int i;
    t_list *new;

    i = 1;
    array = ft_get_array(argc, argv);
    while (array[i])
    {
        new = ft_lstnew(ft_atoi(array[i]));
        new->index = 0;
        ft_lstadd_back(s, new);
        i++;
    }
    ft_myfree(array);
}

void indexing(t_list **s)
{
    int index;
    t_list *tmp;
    t_list *max_n;
    int max_v;

    tmp = NULL;
    index = ft_lstsize(*s);
    while (index)
    {
        tmp = *s;
        max_v = INT_MIN;
        while (tmp)
        {
            if (tmp->content > max_v && tmp->index == 0)
            {
                max_v = tmp->content;
                max_n = tmp;
            }
            tmp = tmp->next;
        }
        max_n->index = index;
        index--;
    }
}

int check_stack_sort(t_list *s)
{
    t_list *tmp;

    tmp = s;
    while (tmp)
    {
        if (tmp->content > tmp->next->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}