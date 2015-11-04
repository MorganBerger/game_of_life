#ifndef GAME_OF_LIFE_H

# define GAME_OF_LIFE_H

# include "libgraph.h"

int     key_handle(int k_code, t_env *e);
int     mouse_hook(int button, int x, int y, t_env *e);

void    draw(t_env *e);
void    make_grille(t_env *e);

void    tab_processing(t_env *e);

#endif
