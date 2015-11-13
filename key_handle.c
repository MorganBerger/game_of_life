#include "game_of_life.h"
#include "libft.h"

#include <mlx.h>
#include <stdlib.h>

#include <stdio.h>

int mouse_hook(int button, int x, int y, t_env *e)
{

    (void)e;
    (void)button;

    x -= 2;
    y -= 3;

    x = (int)x / TILE_S;
    y = (int)y / TILE_S;

    if (x >= 0 && y >=0)
        e->tab[y][x].alive = e->tab[y][x].alive == 0 ? 1 : 0;

    draw(e);

    return (0);
}

void    change_state(t_env *e)
{
    int x;
    int y;

    y = 0;
    while (y < e->nb_line)
    {
        x = 0;
        while (x < e->nb_col)
        {
            e->tab[y][x].was_alive = e->tab[y][x].alive;
            e->tab[y][x].alive = e->tab[y][x].is_alive_next;
            e->tab[y][x].is_alive_next = 0;
            x++;
        }
        y++;
    }
}

void    clear_grille(t_env *e)
{
    int i;
    int y;

    i = 0;
    while (i < e->nb_line)
    {
        y = 0;
        while (y < e->nb_col)
        {
            e->tab[i][y].was_alive = 0;
            e->tab[i][y].alive = 0;
            e->tab[i][y].is_alive_next = 0;
            y++;
        }
        i++;
    }
}

int     key_handle(int k_code, t_env *e)
{
    //ft_putnbrendl(k_code);
    if (k_code == 53)
    {
        if (e->img)
            mlx_destroy_image(e->mlx, e->img);
        exit (0);
    }
    else if (k_code == 49)
    {
        change_state(e);
    }
    else if (k_code == 8) // clear
    {
        clear_grille(e); 
    }
    draw(e);
    return (0);
}
