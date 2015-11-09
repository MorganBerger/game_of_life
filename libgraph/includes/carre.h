#ifndef CARRE_H

# define CARRE_H

# include "point.h"

typedef struct		s_carre
{
    t_point		pos;

    int			size;
    
    int                 alive;
    int                 is_alive_next;

}			t_carre;

#endif
