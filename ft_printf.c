/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:33:29 by siligh            #+#    #+#             */
/*   Updated: 2024/06/14 19:53:40 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static	intfind(char c, va_list ap)
{
	ints;
	s = 0;
	if (c == 'c')
		s += percent_c(va_arg(ap, int));
	else if (c == 's')
		s += percent_s(va_arg(ap, char *));
	else if (c == 'p')
		s += percent_p(va_arg(ap, void *));
	else if (c == 'd')
		s += percent_d(va_arg(ap, int));
	else if (c == 'i')
		s += percent_d(va_arg(ap, int));
	else if (c == 'u')
		s += percent_u(va_arg(ap, unsigned int));
	else if (c == 'x')
		s += percent_x(va_arg(ap, unsigned int));
	else if (c == 'X')
		s += percent_xx(va_arg(ap, unsigned int));
	else if (c == '%')
	{
		write(1, "%", 1);
		s++;
	}
	return (s);
}

intft_printf(const char *str, ...)
{
	inti;
	inttank;
	va_listap;
	tank = 0;
	va_start(ap, str);
	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			tank += find(str[i], ap);
		}
		else
			tank += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (tank);
}
