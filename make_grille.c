#include "game_of_life.h"
#include "libft.h"

void    make_fond(t_env *e)
{
    int i;
    int y;

    i = 0;
    set_color(e, e->fond);
    while (i < HEIGHT)
    {
        y = 0;
        while (y < WIDTH)
        {
            put_pixel(e, i, y);
            y++;
        }
        i++;
    }
}

void    draw_lines(t_env *e)
{
    int     y;
    t_point line[2];

    y = 0;
    while (y < e->nb_line)
    {
        line[0].x = 0;
        line[0].y = y * TILE_S;

        line[1].x = WIDTH;
        line[1].y = y * TILE_S;

        put_line(e, line[0], line[1]);
        y++;    
    }
}

void    draw_columns(t_env *e)
{
    int     x;
    t_point line[2];

    x = 0;
    while (x < e->nb_col)
    {
        line[0].x = x * TILE_S;
        line[0].y = 0;

        line[1].x = x * TILE_S;
        line[1].y = HEIGHT;

        put_line(e, line[0], line[1]);
        x++;
    }
}

void    make_grille(t_env *e)
{
    set_color(e, e->grille);
    draw_lines(e);
    draw_columns(e);
}
