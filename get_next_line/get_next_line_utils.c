/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:54:02 by ybouyzem          #+#    #+#             */
/*   Updated: 2024/03/05 21:49:28 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlength(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_strcpy(char *dst, char *src)
{
	size_t	srclen;
	size_t	i;

	if (!dst || !src)
		return ;
	i = 0;
	srclen = ft_strlength(src);
	while (i < srclen)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}

void	ft_strcat(char *s1, char *s2)
{
	size_t	s1len;
	size_t	i;

	if (!s1 || !s2)
		return ;
	i = 0;
	s1len = ft_strlength(s1);
	while (s2[i])
	{
		s1[s1len] = s2[i];
		i++;
		s1len++;
	}
	s1[s1len] = '\0';
}

char	*ft_stringdup(char	*str)
{
	size_t	l;
	size_t	i;
	char	*result;

	l = ft_strlength(str);
	result = (char *)malloc((size_t)l + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	*ft_stringjoin(char *s1, char *s2)
{
	size_t	len;
	char	*result;

	if (!s1 && !s2)
		return (NULL);
	else if (!s1)
		return (ft_stringdup(s2));
	else if (!s2)
		return (ft_stringdup(s1));
	len = ft_strlength(s1) + ft_strlength(s2);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	ft_strcpy(result, s1);
	ft_strcat(result, s2);
	free(s1);
	return (result);
}
