/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:16:41 by siligh            #+#    #+#             */
/*   Updated: 2024/06/14 20:59:48 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	percent_xx(unsigned int n)
{
	char	*tab;
	char	c;
	int		s;

	tab = "0123456789ABCDEF";
	s = 0;
	if (n >= 16)
	{
		s += ft_print_x(n / 16);
	}
	c = tab[n % 16];
	s += write(1, &c, 1);
	return (s);
}
