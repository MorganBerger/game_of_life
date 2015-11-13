#include "libft.h"
#include "game_of_life.h"
#include "libgraph.h"

#include <mlx.h>
#include <stdlib.h>
#include <time.h>

void    draw(t_env *e)
{
    int x;
    int y;
    
    e->img = mlx_new_image(e->mlx, WIDTH, HEIGHT);
    e->data = mlx_get_data_addr(e->img, &(e->bpp), &(e->line_size), &(e->endian));
    e->bpp /= 8;

    tab_processing(e);
    make_fond(e);
   
    y = 0;
    while (y < e->nb_line)
    {
        x = 0;
        while (x < e->nb_col)
        {
            if (e->tab[y][x].alive == 1)
            {
                //if (e->tab[y][x].is_alive_next == 1)
                    set_color(e, e->square_color);
                //else
                //    set_color(e, e->red);
                
                put_filled_carre(e, e->tab[y][x]); 
            }
            else if (e->tab[y][x].is_alive_next == 1)
            {
               // set_color(e, e->green); 
               // put_filled_carre(e, e->tab[y][x]); 
            }
            x++;
        }
        y++;
    }
    make_grille(e);
    mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);

}

int     expose_hook(t_env *e)
{
    draw(e);
    return (0);
}

void    set_colors(t_env *e)
{
    e->fond.r = 255;
    e->fond.g = 255;
    e->fond.b = 255;
    e->grille.r = 77;
    e->grille.g = 88;
    e->grille.b = 99;
    e->square_color.r = 154;
    e->square_color.g = 176;
    e->square_color.b = 198;
    e->green.r = 0;
    e->green.g = 255;
    e->green.b = 0;
    e->red.r = 255;
    e->red.g = 0;
    e->red.b = 0;
}

void    set_env(t_env *e)
{
    int x;
    int y;
    int random_number;
    
    e->nb_col = WIDTH / TILE_S;
    e->nb_line = HEIGHT / TILE_S; 
    x = 0;
    y = 0;
    e->tab = (t_carre**)malloc(sizeof(t_carre*) * e->nb_line);
    while (y < e->nb_line)
    {
        x = 0;
        e->tab[y] = (t_carre*)malloc(sizeof(t_carre) * e->nb_col);
        while (x < e->nb_col)
        {
            random_number = rand() % 100 + 1;
            e->tab[y][x].pos.x = x * TILE_S; 
            e->tab[y][x].pos.y = y * TILE_S;
            e->tab[y][x].size = TILE_S;
            e->tab[y][x].alive = random_number > 90 ? 1 : 0;
            e->tab[y][x].is_alive_next = 0;
            e->tab[y][x].was_alive = 0;
            x++;
        }
        y++;
    }
    set_colors(e);
}

void    init_mlx(t_env *e, char *yo)
{
    if (!strcmp(yo, "life"))
        e->f = dead_or_alive_life; 
    else if (!strcmp(yo, "seeds"))
        e->f = dead_or_alive_seeds;
    else if (!strcmp(yo, "brain"))
        e->f = dead_or_alive_brain;

    set_env(e);
    e->mlx = mlx_init();    
    e->win = mlx_new_window(e->mlx, WIDTH, HEIGHT, "G_O_L");

    mlx_expose_hook(e->win, expose_hook, e);
    mlx_hook(e->win, 2, (1L << 0), key_handle, e);
    mlx_mouse_hook(e->win, mouse_hook, e);
    mlx_loop(e->mlx);
}

int     main(int ac, char **av)
{
    t_env   env;

    (void)ac;
    (void)av;

    if (ac > 1)
    {
        srand(time(NULL));
        init_mlx(&env, av[1]);
    }
    return (0);
}
