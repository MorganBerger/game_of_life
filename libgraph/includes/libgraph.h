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

# define HEIGHT 800
# define WIDTH 1400

# define ABS(x) (x < 0 ? -x : x)
# define PI 3.141592653589793

typedef struct		s_point
{
	double			x;
	double			y;
}					t_point;

typedef	struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	int				w;
	int				h;

	char			*data;
	int				bpp;
	int				line_size;
	int				endian;

	int				r;
	int				g;
	int				b;

	int				img_h;
	int				img_w;

	int				*limits;
	int				**map;

	t_point			pos;
	t_point			dir;
	t_point			plane;
	t_point			camera;
	t_point			ray_pos;
	t_point			ray_dir;
	t_point			map_index;
	t_point			side_dist;
	t_point			d_dist;
	t_point			step;

	double			perpwalldist;

	int				hit;
	int				side;

	int				lineheight;
	int				drawstart;
	int				drawend;

	double			move_speed;
	double			rot_speed;

	double			olddirx;
	double			oldplanex;
}					t_env;

typedef struct		s_carre
{
	t_point			pos;

	int				size;

	struct s_carre	*left;
	struct s_carre	*right;
}					t_carre;

void				set_image(t_env *e);

int					put_pixel(t_env *e, int x, int y);
void				put_line(t_env *e, t_point p1, t_point p2);
void				put_verline(t_env *e, int x, int y_start, int y_end);
void				put_circle(t_env *e, int posx, int posy, int r);
void				put_carre(t_env *e, t_carre carre);
void				set_color(t_env *e, int r, int g, int b);

#endif
