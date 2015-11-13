#include "game_of_life.h"
#include "libft.h"

int     tl(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = (x == 0 ? e->nb_col - 1 : x - 1);
    yr = (y == 0 ? e->nb_line - 1 : y - 1);

    return (e->tab[yr][xr].alive);
}
int     t(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = x; 
    yr = (y == 0 ? e->nb_line - 1 : y - 1);

    return (e->tab[yr][xr].alive);
}
int     tr(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = (x == e->nb_col - 1 ? 0 : x + 1);
    yr = (y == 0 ? e->nb_line - 1 : y - 1);
    
    return (e->tab[yr][xr].alive);
}

int     r(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = (x == e->nb_col - 1 ? 0 : x + 1);
    yr = y;

    return (e->tab[yr][xr].alive);
}
int     br(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = (x == e->nb_col - 1 ? 0 : x + 1);
    yr = (y == e->nb_line - 1 ? 0 : y + 1);
    
    return (e->tab[yr][xr].alive);
}
int     b(t_env *e, int x, int y)
{
    int xr;
    int yr;
   
    xr = x;
    yr = (y == e->nb_line - 1 ? 0 : y + 1);

    return (e->tab[yr][xr].alive);
}
int     bl(t_env *e, int x, int y)
{
    int xr;
    int yr;
   
    xr = (x == 0 ? e->nb_col - 1 : x - 1); 
    yr = (y == e->nb_line - 1 ? 0 : y + 1);

    return (e->tab[yr][xr].alive);
}
int     l(t_env *e, int x, int y)
{
    int xr;
    int yr;

    xr = (x == 0 ? e->nb_col - 1 : x - 1); 
    yr = y; 

    return (e->tab[yr][xr].alive);
}


int     process_all(t_env *e, int x, int y)
{
    int res;

    res =   tl(e, x, y) + t(e, x, y) + tr(e, x, y) + \
            r(e, x, y) + br(e, x, y) + b(e, x, y) + \
            bl(e, x, y) + l(e, x, y); 
    
    return (res);
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
            count = process_all(e, x, y);
            e->f(&(e->tab[y][x]), count);
            x++;
        }
        y++;
    }
}
