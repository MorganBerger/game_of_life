#include "game_of_life.h"

void    dead_or_alive_life(t_carre *c, int count)
{
    if (count < 2 || count > 3)
    {
        c->is_alive_next = 0;
    }
    if (count == 3)
    {
        c->is_alive_next = 1;
    }
    if (count == 2)
    {
        c->is_alive_next = c->alive;
    }
}

void    dead_or_alive_seeds(t_carre *c, int count)
{
    if (c->alive == 1)
        c->is_alive_next = 0;
    else if (count == 2)
        c->is_alive_next = 1;
    else
        c->is_alive_next = 0;
}

void    dead_or_alive_brain(t_carre *c, int count)
{
    if (c->alive == 1)
        c->is_alive_next = 0;
    else if (count == 2)
    {
        if (c->was_alive == 1 && c->alive == 0)
            c->is_alive_next = 0;
        else
            c->is_alive_next = 1;
    }
    else
        c->is_alive_next = 0;  
}
