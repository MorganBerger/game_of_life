#include "game_of_life.h"
#include "libft.h"

#include <mlx.h>
#include <stdlib.h>

int key_handle(int k_code, t_env *e)
{
    ft_putnbrendl(k_code);
    if (k_code == 53)
    {
        if (e->img)
            mlx_destroy_image(e->mlx, e->img);
        exit (0);
    }
    return (0);
}
