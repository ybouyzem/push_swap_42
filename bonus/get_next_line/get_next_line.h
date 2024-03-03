/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouyzem <ybouyzem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 11:54:12 by ybouyzem          #+#    #+#             */
/*   Updated: 2023/12/08 15:50:42 by ybouyzem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
size_t	ft_strlen(char *str);
void	ft_strcpy(char *dst, char *src);
void	ft_strcat(char *s1, char *s2);
char	*ft_strjoin(char *start, char *buff);
int		ft_check(char *str, int c);
char	*ft_join(char *dest, char *s1, char *s2);
#endif
