/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/28 05:01:13 by mberger           #+#    #+#             */
/*   Updated: 2015/03/19 22:39:36 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_nbnew(int size)
{
	int		*nb;

	if (!(nb = (int*)malloc(sizeof(int) * size)))
		return ((int*)NULL);
	else
	{
		while (size--)
			nb[size] = 0;
		return ((int*)nb);
	}
}
