/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 15:28:05 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 21:19:06 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_isspace(size_t c)
{
	if (c == '\t')
		return (1);
	else if (c == '\n')
		return (1);
	else if (c == ' ')
		return (1);
	else
		return (0);
}

static size_t	count_spaces(char const *s)
{
	size_t	i;

	i = 0;
	while (ft_isspace(s[i]))
		i++;
	return (i);
}

static size_t	count_spaces_rev(char const *s, size_t len)
{
	if (len)
	{
		len--;
		while (ft_isspace(s[len]) && len > 0)
			len--;
	}
	return (len);
}

char			*ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;

	if (s)
	{
		len = count_spaces_rev(s, ft_strlen(s));
		start = count_spaces(s);
		if (!len && !start)
			return (ft_strdup(s));
		else if (start == ft_strlen(s))
			return (ft_strsub(s, 0, 0));
		else
			return (ft_strsub(s, start, len - start + 1));
	}
	return (NULL);
}
