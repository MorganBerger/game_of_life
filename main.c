#include "libft.h"
#include "game_of_life.h"

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

    make_fond(e);
   
    y = 0;
    while (y < e->nb_line)
    {
        x = 0;
        while (x < e->nb_col)
        {
            if (e->tab[y][x].alive == 1)
            {
                set_color(e, e->square_color);
                put_filled_carre(e, e->tab[y][x]); 
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
    e->square_color2.r = 100;
    e->square_color2.g = 100;
    e->square_color2.b = 100;
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
            e->tab[y][x].alive = 0;//random_number > 90 ? 1 : 0;
            e->tab[y][x].is_alive_next = 0;
            x++;
        }
        y++;
    }
    set_colors(e);
}

int     main(int ac, char **av)
{
    t_env   env;

    (void)ac;
    (void)av;

    srand(time(NULL));

    set_env(&env);
    env.mlx = mlx_init();    
    env.win = mlx_new_window(env.mlx, WIDTH, HEIGHT, "G_O_L");

    mlx_expose_hook(env.win, expose_hook, &env);
    mlx_hook(env.win, 2, (1L << 0), key_handle, &env);
    mlx_mouse_hook(env.win, mouse_hook, &env);
    mlx_loop(env.mlx);

    return (0);
}
