/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 06:14:54 by mberger           #+#    #+#             */
/*   Updated: 2015/03/21 20:48:10 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"
#include "libft.h"
#include <stdlib.h>
#include <math.h>

void	swap_point(t_point *p1, t_point *p2)
{
	t_point	tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

void	verif(t_point *p1, t_point *p2)
{
	if ((*p1).x > (*p2).x)
	{
		swap_point(p1, p2);
		(*p1).x++;
		if ((*p1).y < (*p2).y)
			(*p1).y++;
	}
}

void	put_line(t_env *e, t_point p1, t_point p2)
{
	int		i;
	int		vec;

	verif(&p1, &p2);
	i = ((fabs(p2.x - p1.x) >= fabs(p2.y - p1.y)) ? p1.x : p1.y);
	if (p1.x <= p2.x && (fabs(p2.x - p1.x) >= fabs(p2.y - p1.y)))
	{
		while (i < p2.x)
		{
			put_pixel(e, i, p1.y + ((p2.y - p1.y) * (i - p1.x)) /
					(p2.x - p1.x));
			i++;
		}
	}
	else if (p1.x <= p2.x && (fabs(p2.x - p1.x) < fabs(p2.y - p1.y)))
	{
		vec = (p1.y > p2.y ? -1 : 1);
		while (i != p2.y)
		{
			put_pixel(e, p1.x + ((p2.x - p1.x) * (i - p1.y)) /
					(p2.y - p1.y), i);
			i += vec;
		}
	}
}
