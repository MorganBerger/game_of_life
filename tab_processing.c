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

    res = 0;
    res += tl(e, x, y);
    res += t(e, x, y);
    res += tr(e, x, y);
    res += r(e, x, y); 
    res += br(e, x, y); 
    res += b(e, x, y); 
    res += bl(e, x, y); 
    res += l(e, x, y); 
    
    //ft_putstr("res : ");
    //ft_putnbrendl(res);
    return (res);
}

void    dead_or_alive(t_env *e, int x, int y, int count)
{
    if (count < 2 || count > 3)
    {
        e->tab[y][x].is_alive_next = 0;
    }
    if (count == 3)
    {
        e->tab[y][x].is_alive_next = 1;
    }
    if (count == 2)
    {
        e->tab[y][x].is_alive_next = e->tab[y][x].alive;
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
            count = process_all(e, x, y);
            dead_or_alive(e, x, y, count);
            x++;
        }
        y++;
    }
}
