/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:05:30 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 18:53:56 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char			*keep;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = dst;
	s2 = (unsigned char *)src;
	i = 0;
	if (!(keep = (void*)malloc(sizeof(char) * n)))
		return (NULL);
	keep = dst;
	while (i < n)
	{
		s1[i] = s2[i];
		i++;
	}
	return (keep);
}
