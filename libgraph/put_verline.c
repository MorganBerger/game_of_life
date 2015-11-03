/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_verline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/21 18:21:46 by mberger           #+#    #+#             */
/*   Updated: 2015/03/21 18:23:48 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

void	put_verline(t_env *e, int x, int y_start, int y_end)
{
	t_point a;
	t_point	b;

	a.x = x;
	b.x = x;
	a.y = y_start;
	b.y = y_end;
	put_line(e, a, b);
}
