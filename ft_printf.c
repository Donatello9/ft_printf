/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:33:29 by siligh            #+#    #+#             */
/*   Updated: 2024/06/11 16:56:16 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	count;
	int		tank;
	va_list	ap;

	tank = 0;
	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
			tank++;
		}
		i++;
		if (str[i] == 'c')
			tank += ft_print_c(va_arg(ap, int));
		else if (str[i] == 's')
			tank += ft_print_s(va_arg(ap, char *));
		// if else (str[i] == 'p')
		// ft_print_p(va_arg(ap, void));
		else if (str[i] == 'd')
			tank += ft_print_d(va_arg(ap, int));
		else if (str[i] == 'i')
			tank += ft_print_d(va_arg(ap, int));
		else if (str[i] == 'u')
			tank += ft_print_u(va_arg(ap, unsigned int));
		else if (str[i] == 'x')
			tank += ft_print_x(va_arg(ap, int));
		else if (str[i] == 'X')
			tank += ft_print_X(va_arg(ap, int));
		else if (str[i] == '%')
		{
			write(1, "%", 1);
			tank++;
		}
		i++;
	}
	va_end(ap);
	return (tank);
}

int	main(void)
{
	printf("test = %d", ft_printf("adsasd %f dwda %df %F fdf"));
}
