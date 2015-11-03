/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:43:53 by mberger           #+#    #+#             */
/*   Updated: 2014/12/23 21:18:41 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*str;

	str = s1;
	while (*str != '\0')
	{
		str++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*str = *s2;
		str++;
		s2++;
		n--;
	}
	*str = '\0';
	return (s1);
}
