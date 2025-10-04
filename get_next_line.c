/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/01 11:07:26 by mokatfi           #+#    #+#             */
/*   Updated: 2025/01/15 02:36:16 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_star_n9i(char *s)
{
	int		i;
	char	*p;

	i = 0;
	if (!s || s[i] == '\0')
		return (NULL);
	while (s[i] && s[i] != '\n')
		i++;
	p = malloc(sizeof(char) * (i + 2));
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
	{
		p[i] = s[i];
		i++;
	}
	if (s[i] == '\n')
		p[i++] = '\n';
	p[i] = '\0';
	return (p);
}

char	*ft_chyata(char *s)
{
	int		i;
	int		j;
	char	*k;

	i = 0;
	while (s && s[i] && s[i] != '\n')
		i++;
	if (!s || s[i] == '\0')
	{
		free(s);
		return (NULL);
	}
	k = malloc(sizeof(char) * (ft_strlen(s) - i + 1));
	if (!k)
	{
		free(s);
		return (NULL);
	}
	i++;
	j = 0;
	while (s[i])
		k[j++] = s[i++];
	k[j] = '\0';
	free(s);
	return (k);
}

char	*ft_kat9ra(int fd, char *container)
{
	char	*buffer;
	int		ch7al_9rat;

	if (BUFFER_SIZE < 0)
		return (NULL);
	ch7al_9rat = 1;
	buffer = malloc(((size_t)BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	while (ft_strchr(buffer) == 0 && ch7al_9rat != 0)
	{
		ch7al_9rat = read(fd, buffer, BUFFER_SIZE);
		if (ch7al_9rat == -1)
		{
			free(buffer);
			free(container);
			return (NULL);
		}
		buffer[ch7al_9rat] = '\0';
		container = ft_strjoin(container, buffer);
	}
	free(buffer);
	return (container);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*s;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	s = ft_kat9ra(fd, s);
	if (!s)
		return (NULL);
	line = ft_star_n9i(s);
	s = ft_chyata(s);
	return (line);
}
