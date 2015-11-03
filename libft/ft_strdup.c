/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:51:00 by mberger           #+#    #+#             */
/*   Updated: 2015/03/22 00:10:35 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scopy;
	size_t	len;

	len = ft_strlen(s1);
	scopy = (char*)malloc(sizeof(char*) * len);
	if (scopy == NULL)
		return (NULL);
	scopy = ft_strncpy(scopy, s1, len);
	return (scopy);
}
