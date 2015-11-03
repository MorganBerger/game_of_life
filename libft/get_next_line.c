/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/14 17:48:32 by mberger           #+#    #+#             */
/*   Updated: 2015/03/24 04:29:36 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <unistd.h>
#include <fcntl.h>

char	*yo_realloc(char *s1, size_t size)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1);
	if (!(new = (char*)malloc(sizeof(char*) * (len + size))))
		return (NULL);
	if (new == NULL)
		return (NULL);
	new = ft_strncpy(new, s1, len);
	return (new);
}

char	*ft_traitement(char **hey, int *res)
{
	int		i;
	char	*lu;

	i = 0;
	if (!ft_strcmp(*hey, ""))
	{
		(*res) = 0;
		return (ft_strdup(""));
	}
	while ((*hey)[i] != '\n' && (*hey)[i] != '\0')
		i++;
	lu = ft_strnew(i);
	ft_strncpy(lu, (*hey), i);
	(*res) = 1;
	if (ft_strchr((*hey), '\n') == NULL)
		(*hey) = ft_strdup("");
	else
		(*hey) = ft_strcpy((*hey), ((*hey) + i + 1));
	return (lu);
}

int		get_next_line(int fd, char **line)
{
	int			yo;
	int			len;
	int			res;
	static char	*save;

	if (!save)
	{
		if (!(save = (char*)malloc(sizeof(char) * 1)))
			return (-1);
	}
	len = ft_strlen(save);
	if (!((*line) = (char*)malloc(sizeof(char) * BUFF_SIZE)))
		return (-1);
	while ((yo = read(fd, (*line), BUFF_SIZE)) > 0)
	{
		if (!(save = yo_realloc(save, len + yo)))
			return (-1);
		ft_strncat(save, (*line), yo);
		if (ft_strchr(save, '\n'))
			break ;
	}
	if (yo < 0)
		return (-1);
	(*line) = ft_strdup(ft_traitement(&save, &res));
	return (res);
}
