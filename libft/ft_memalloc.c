/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/08 16:21:21 by mberger           #+#    #+#             */
/*   Updated: 2014/11/11 17:21:04 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*tab;
	char	*init;

	i = 0;
	tab = (void*)malloc(sizeof(char) * size);
	init = (char*)tab;
	if (tab == NULL)
		return (NULL);
	while (i < size)
	{
		init[i] = 0;
		i++;
	}
	return (tab);
}
