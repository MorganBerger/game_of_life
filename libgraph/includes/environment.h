#ifndef ENVIRONMENT_H

# define ENVIRONMENT_H

# include "point.h"

# define HEIGHT 600
# define WIDTH 600

typedef	struct		s_env
{
    void		*mlx;
    void		*win;
    void		*img;
    int			w;
    int			h;

    char		*data;
    int			bpp;
    int			line_size;
    int			endian;

    int			r;
    int			g;
    int			b;

    int			img_h;
    int			img_w;

    int			*limits;
    int			**map;

    t_point		pos;
    t_point		dir;
    t_point		plane;
    t_point		camera;
    t_point		ray_pos;
    t_point		ray_dir;
    t_point		map_index;
    t_point		side_dist;
    t_point		d_dist;
    t_point		step;

    double		perpwalldist;

    int			hit;
    int			side;

    int			lineheight;
    int			drawstart;
    int			drawend;

    double		move_speed;
    double		rot_speed;

    double		olddirx;
    double		oldplanex;
}		        t_env;

#endif
