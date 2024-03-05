/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 00:07:51 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/05 01:27:23 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int main(int argc, char **argv)
{
    t_list	*a;
	t_list	*b;
	char *str;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	check(argc, argv);
	if (argc > 1)
	{
		while (argc > 1)
		{
			str = get_next_line(0);
			if (!str)
				return 0;
			ft_check_moves(str);			
		}
	}
}