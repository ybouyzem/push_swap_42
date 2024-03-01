/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parssing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:04:57 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/01 11:55:07 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void check_duplication(char **str)
{
    int i;
    int j;
    
    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if ((ft_atoi(str[i]) == ft_atoi(str[j])) || (ft_atoi(str[i]) < -214748368 || ft_atoi(str[i]) > 214748367))
                ft_error();
            j++;
        }
        i++;
    }
}

void check_empty(char **args)
{
    int i;
    int j;
    int space;

    i = 1;
    while (args[i])
    {
        j = 0;
        space = 0;
        while (args[i][j])
        {
            if (ft_isdigit(args[i][j]))
                space = 1;
            j++; 
        }
        if (space == 0 || args[i][0] == '\0')
            ft_error();
        i++;
    }
}

int check_sort(int argc, char **argv)
{
    int i;
    int j;
    char **array;

    array = ft_get_array(argc, argv);
    i = 0;
    while (array[i])
    {
        j = i + 1;
        while (array[j])
        {
            if (ft_atoi(array[i]) > ft_atoi(array[j]))
                return (ft_myfree(array), 0);
            j++;
        }
        i++;
    }
    return (ft_myfree(array), 1);
}

void check(int argc, char **argv)
{
    int i;
    int j;
    char **array;

    array = NULL;
    i = 0;

    array = ft_get_array(argc, argv);
    check_duplication(array);
    check_empty(argv);
    while (array[i])
    {
        j = 0;
        if ((array[i][j] == '-' || array[i][j] == '+') && array[i][j + 1])
            j++;
        while (array[i][j])
        {
            if (!ft_isdigit(array[i][j]))
                (ft_myfree(array), ft_error());
            j++;
        }
        i++;
    }
    ft_myfree(array);
}