/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:50:22 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 03:25:30 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
	{
		return (1);
	}
	return (0);
}

long	ft_atoi(const char *str)
{
	int		i;
	long	nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (ft_isspace(str[i]) && str[i])
		i++;
	if ((str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		nb = (nb * 10) + (str[i++] - 48);
		if ((nb < -2147483648 && sign == -1) || (nb > 2147483647 && sign == 1))
			return (2147483649);
	}
	return (nb * sign);
}
