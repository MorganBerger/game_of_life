/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 13:26:37 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 18:51:49 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((s1[i]) && (s1[i] == s2[i])) && (i < n))
		i++;
	if (n == i)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
