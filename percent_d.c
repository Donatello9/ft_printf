/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_d.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:48:09 by siligh            #+#    #+#             */
/*   Updated: 2024/06/07 15:56:44 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"



void	percent_d(double n)
{
	char	c;
    double dec;
    int nb;

    nb = (int) n;
    dec = n - nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		percent_d((int)(n / 10));
	}
	c = (int)n % 10 + '0';
	write(1, &c, 1);
}

int	main(void)
{
	percent_d(-4462);
}