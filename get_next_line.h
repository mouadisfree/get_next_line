/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:06:57 by mokatfi           #+#    #+#             */
/*   Updated: 2025/01/13 11:35:18 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <limits.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

char	*get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str);

#endif