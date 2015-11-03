#include "libft.h"
#include "game_of_life.h"

#include <mlx.h>
#include <stdlib.h>

void    draw(t_env *e)
{
    e->img = mlx_new_image(e->mlx, 420, 420);
    e->data = mlx_get_data_addr(e->img, &(e->bpp), &(e->line_size), &(e->endian));
    e->bpp /= 8;

    e->r = 255;
    e->g = 255;
    e->b = 255;

    mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
}

int     expose_hook(t_env *e)
{
    draw(e);
    return (0);
}

int     main(int ac, char **av)
{
    t_env   env;

    (void)ac;
    (void)av;

    env.mlx = mlx_init();    
    env.win = mlx_new_window(env.mlx, 420, 420, "42");

    mlx_expose_hook(env.win, expose_hook, &env);
    mlx_key_hook(env.win, key_handle, &env);
    mlx_loop(env.mlx);
    
    return (0);
}
