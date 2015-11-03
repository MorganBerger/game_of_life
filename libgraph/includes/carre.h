#ifndef CARRE_H

# define CARRE_H

# include "point.h"

typedef struct		s_carre
{
    t_point		pos;

    int			size;

    struct s_carre	*left;
    struct s_carre	*right;
}			t_carre;

#endif
