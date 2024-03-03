/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:51:49 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/03 03:30:44 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*r;
	size_t	len;
	size_t	tmp;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	len = ls1 + ls2 + 1;
	r = (char *)malloc(len);
	if (r == NULL)
		return (NULL);
	tmp = ft_strlcpy(r, s1, ls1 + 1);
	tmp = ft_strlcat(r, s2, len);
	return (free(s1), r);
}
