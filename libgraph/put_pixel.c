/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 03:26:37 by mberger           #+#    #+#             */
/*   Updated: 2015/03/30 16:48:13 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"
#include "libft.h"

int		put_pixel(t_env *e, int x, int y)
{
        if (x > 0 && x < WIDTH && y > 0 && y < HEIGHT)
	{
                e->data[x * e->bpp + y * e->line_size] = e->b;
		e->data[(x * e->bpp + y * e->line_size) + 1] = e->g;
		e->data[(x * e->bpp + y * e->line_size) + 2] = e->r;
	}
	return (0);
}
