#ifndef ENVIRONMENT_H

# define ENVIRONMENT_H

# include "point.h"
# include "carre.h"
# include "color.h"

# define HEIGHT 800
# define WIDTH 800

# define TILE_S 3

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
    t_color             green;
    t_color             red;

    void                (*f)(t_carre*, int);

}		        t_env;

#endif
