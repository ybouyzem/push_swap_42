/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:07:51 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/08 22:43:41 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	check_instructions(t_list **a, t_list **b)
{
	if (check_stack_sort(*a) && ft_lstsize(*b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free_stack(*a);
	ft_free_stack(*b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*str;

	a = NULL;
	b = NULL;
	if (read(0, NULL, 0) < 0)
		ft_error();
	if (argc == 1)
		return (0);
	check(argc, argv);
	ft_full_stack(argc, argv, &a);
	if (argc > 1)
	{
		while (argc > 1)
		{
			str = get_next_line(0);
			if (!str)
			{
				free(str);
				break ;
			}
			ft_check_moves(str, &a, &b);
			free(str);
		}
		check_instructions(&a, &b);
	}
}
