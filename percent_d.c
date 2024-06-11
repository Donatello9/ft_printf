/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:48:09 by siligh            #+#    #+#             */
/*   Updated: 2024/06/11 13:08:33 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	percent_d(int n)
{
	char	c;
	long	nb;
	char	resu[10];
	int		i;
	int		s;

	nb = n;
	i = 0;
	s = 0;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		s++;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		s++;
	}
	if (nb > 0)
	{
		resu[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
		s++;
	}
	while (i > 0)
	{
		i--;
		write(1, &resu[i], 1);
	}
	return (s);
}
