/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgraph.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/04 18:39:45 by mberger           #+#    #+#             */
/*   Updated: 2015/03/30 16:50:16 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGRAPH_H
# define LIBGRAPH_H

# include "point.h"
# include "carre.h"
# include "color.h"
# include "environment.h"

# define ABS(x) (x < 0 ? -x : x)
# define PI 3.141592653589793

void				set_image(t_env *e);

int				put_pixel(t_env *e, int x, int y);
void				put_line(t_env *e, t_point p1, t_point p2);
void				put_verline(t_env *e, int x, int y_start, int y_end);
void				put_circle(t_env *e, int posx, int posy, int r);
void				put_carre(t_env *e, t_carre carre);
void				set_color(t_env *e, t_color color);
void	                        put_filled_carre(t_env *e, t_carre carre);

#endif
