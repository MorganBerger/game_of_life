/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_circle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/30 23:16:30 by mberger           #+#    #+#             */
/*   Updated: 2015/03/19 03:05:35 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"
#include <math.h>

void	put_circle(t_env *e, int posx, int posy, int r)
{
	int			yo;
	t_point		mid;
	t_point		c;

	yo = 0;
	mid.x = posx;
	mid.y = posy;
	while (yo <= 360)
	{
		c.x = posx + r * cos(yo);
		c.y = posy + r * sin(yo);
		put_line(e, mid, c);
		yo++;
	}
}
