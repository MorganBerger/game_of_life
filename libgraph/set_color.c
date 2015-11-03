/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 04:41:39 by mberger           #+#    #+#             */
/*   Updated: 2015/03/06 19:53:10 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"

void	set_color(t_env *e, int r, int g, int b)
{
	e->r = r;
	e->g = g;
	e->b = b;
}
