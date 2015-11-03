/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mberger <mberger@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/08/03 17:32:05 by mberger           #+#    #+#             */
/*   Updated: 2014/08/03 19:30:43 by mberger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	chr_tmp;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		chr_tmp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = chr_tmp;
		j++;
		i--;
	}
	return (str);
}
