/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:21:40 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 21:17:54 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1b;
	unsigned char	*s2b;

	i = 0;
	s1b = (unsigned char *)s1;
	s2b = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (((s1b[i]) && (s1b[i] == s2b[i])) && (i < n))
		i++;
	if (n == i)
		i--;
	return (s1b[i] - s2b[i]);
}
