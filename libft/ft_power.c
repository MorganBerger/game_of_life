/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/04 22:22:48 by mberger           #+#    #+#             */
/*   Updated: 2014/08/06 11:59:47 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nb, int power)
{
	int result;
	int i;

	i = 0;
	result = 1;
	if (nb > 0)
	{
		while (i < power)
		{
			result *= nb;
			i++;
		}
	}
	else
	{
		result = 0;
	}
	return (result);
}
