/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbsplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 15:38:13 by mberger           #+#    #+#             */
/*   Updated: 2015/03/21 23:40:40 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_w(char const *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			j++;
			i++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (j);
}

static int		add_w(size_t *i, char const *s, char c)
{
	size_t		size;
	size_t		j;
	char		*word;
	int			res;

	size = *i;
	j = 0;
	while (s[size] && s[size] != c)
		size++;
	word = ft_strnew(size - *i);
	if (word)
	{
		while (*i < size)
		{
			word[j] = s[*i];
			j++;
			*i += 1;
		}
		res = ft_atoi(word);
		return (res);
	}
	return (0);
}

int				*ft_nbsplit(char const *s, char c, int *y)
{
	int			*tab;
	size_t		o;
	size_t		*i;
	size_t		j;

	o = 0;
	i = &o;
	j = 0;
	tab = NULL;
	if (s)
		tab = (int*)malloc(sizeof(int) * (count_w(s, c) + 1));
	if (tab)
	{
		while (j < count_w(s, c))
		{
			while (s[*i] == c)
				*i += 1;
			if (s[*i] != c && s[*i])
				tab[j++] = add_w(i, s, c);
		}
		*y = j;
		return (tab);
	}
	return (0);
}
