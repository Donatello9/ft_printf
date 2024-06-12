/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:48:09 by siligh            #+#    #+#             */
/*   Updated: 2024/06/12 13:37:26 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	percent_u(unsigned int n)
{
	char			c;
	char			*resu;
	unsigned long	nb;
	int				i;
	int				s;
	int				temp;

	nb = n;
	temp = 0;
	i = 0;
	s = 0;
	while (temp > 0)
	{
		temp /= 16;
		s++;
	}
	resu = (char *)malloc((s + 1) * sizeof(char));
	if (!resu)
		return (0);
	s = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		s++;
	}
	while (nb > 0)
	{
		resu[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		s++;
		write(1, &resu[i], 1);
	}
	return (s);
}
