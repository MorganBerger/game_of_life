/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/25 11:22:19 by mberger           #+#    #+#             */
/*   Updated: 2015/03/25 12:20:01 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	show_int_tab(int **tab, int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putnbr(tab[i][j]);
			ft_putchar(' ');
			j++;
		}
		ft_putendl("");
		i++;
	}
}
