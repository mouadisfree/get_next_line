/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:07:36 by mokatfi           #+#    #+#             */
/*   Updated: 2025/01/13 04:57:38 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*g;
	size_t	i;
	size_t	j;

	i = 0;
	g = malloc(sizeof(char) * (ft_strlen(s2) + ft_strlen(s1)) + 1);
	if (!g)
	{
		free(s1);
		return (NULL);
	}
	while (s1 && s1[i])
	{
		g[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		g[i++] = s2[j++];
	g[i] = '\0';
	free(s1);
	return (g);
}

int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		if (str[i++] == '\n')
			return (1);
	return (0);
}
