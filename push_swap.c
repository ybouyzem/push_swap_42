/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:53:45 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/08 22:55:12 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	ft_free_stack(t_list *s)
{
	t_list	*tmp;
	t_list	*to_free;

	tmp = s;
	while (tmp)
	{
		to_free = tmp;
		tmp = tmp->next;
		free(to_free);
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

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
	ft_free_stack(a);
}
