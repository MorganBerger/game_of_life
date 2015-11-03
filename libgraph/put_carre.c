/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_carre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 17:45:52 by mberger           #+#    #+#             */
/*   Updated: 2015/03/20 11:40:06 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"
#include "../libft/includes/libft.h"

void	put_carre(t_env *e, t_carre carre)
{
	t_point t;
	t_point	t1;

	t.x = (carre.pos.x - (carre.size / 2));
	t.y = (carre.pos.y + (carre.size / 2));
	t1.x = (carre.pos.x + (carre.size / 2));
	t1.y = (carre.pos.y + (carre.size / 2));
	put_line(e, t, t1);
	t.x = (carre.pos.x + (carre.size / 2));
	t.y = (carre.pos.y - (carre.size / 2));
	put_line(e, t, t1);
	t1.x = (carre.pos.x - (carre.size / 2));
	t1.y = (carre.pos.y - (carre.size / 2));
	put_line(e, t, t1);
	t.x = (carre.pos.x - (carre.size / 2));
	t.y = (carre.pos.y + (carre.size / 2));
	put_line(e, t, t1);
}
