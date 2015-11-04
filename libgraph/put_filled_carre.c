/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_filled_carre.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/11 17:45:52 by mberger           #+#    #+#             */
/*   Updated: 2015/03/20 11:40:06 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgraph.h"
#include "libft.h"

void	put_filled_carre(t_env *e, t_carre carre)
{
    t_point p[2];

    p[0].x = carre.pos.x;
    p[0].y = carre.pos.y;

    p[1].x = carre.pos.x + carre.size;
    p[1].y = carre.pos.y;
    
    while (p[0].y < carre.pos.y + carre.size)
    {
        put_line(e, p[0], p[1]);
        p[0].y++;
        p[1].y++;
    }
}
