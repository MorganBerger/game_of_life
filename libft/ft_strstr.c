/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 19:27:57 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 19:30:56 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char const *s1, char const *s2)
{
	char	*s1b;
	size_t	len;

	len = ft_strlen(s2);
	if (!s2 || !len || !s1)
		return ((char*)s1);
	s1b = (char*)s1;
	while ((s1b = ft_strchr(s1b, *s2)))
	{
		if (!ft_strncmp(s1b, s2, len))
			return (s1b);
		s1b++;
	}
	return (NULL);
}
