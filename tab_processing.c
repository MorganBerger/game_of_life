#include "game_of_life.h"
#include "libft.h"

int     get_nb_alive(t_env *e, int x, int y)
{
    int res;

    res = 0;
    if (y > 0 && x > 0 && e->tab[y - 1][x - 1].alive == 1)
        res++;
    if (y > 0 && e->tab[y - 1][x].alive == 1)
        res++;
    if (y > 0 && x < e->nb_col && e->tab[y - 1][x + 1].alive == 1)
        res++;
    if (y < e->nb_line && x > 0 && e->tab[y + 1][x - 1].alive == 1)
        res++; 
    if (y < e->nb_line && e->tab[y + 1][x].alive == 1)
        res++; 
    if (y < e->nb_line && x < e->nb_col && e->tab[y + 1][x + 1].alive == 1)
        res++; 
    if (x < e->nb_col && e->tab[y][x + 1].alive == 1)
        res++; 
    if (x > 0 && e->tab[y][x - 1].alive == 1)
        res++; 

    return res;
}

void    dead_or_alive(t_env *e, int x, int y, int count)
{
    if (count < 2 || count > 3)
    {
        e->tab[y][x].is_alive_next = 0;
    }
    if (count == 3 || (count == 2 && e->tab[y][x].alive == 1))
    {
        e->tab[y][x].is_alive_next = 1;
    }
}

void    tab_processing(t_env *e)
{
    int x;
    int y;
    int count;

    y = 0;
    while (y < e->nb_line)
    {
        x = 0;
        while (x < e->nb_col)
        {
            count = get_nb_alive(e, x, y);
            dead_or_alive(e, x, y, count);
            x++;
        }
        y++;
    }
}
