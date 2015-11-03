/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:43:42 by mberger           #+#    #+#             */
/*   Updated: 2014/11/11 09:56:14 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	k;

	i = 0;
	k = (char)c;
	while (s[i] && s[i] != k)
		i++;
	if (s[i] == k)
		return ((char*)&s[i]);
	return (NULL);
}
