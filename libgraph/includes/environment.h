#ifndef ENVIRONMENT_H

# define ENVIRONMENT_H

# include "point.h"
# include "carre.h"
# include "color.h"

# define HEIGHT 1200
# define WIDTH 1200

# define TILE_S 10

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

    int                 nb_col;
    int                 nb_line;

    t_carre             **tab;

    t_color             fond;
    t_color             grille;
    t_color             square_color;
    t_color             square_color2;

}		        t_env;

#endif
