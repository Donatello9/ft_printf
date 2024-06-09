/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:33:29 by siligh            #+#    #+#             */
/*   Updated: 2024/06/09 15:23:16 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	size_t	count;
	va_list	ap;

	va_start(ap, str);
	i = 0;
	while (str[i])
	{
		while (str[i] != '%')
		{
			write(1, &str[i], 1);
			i++;
		}
		i++;
		if (str[i] == 'c')
			ft_print_c(va_arg(ap, int));
		if
			else(str[i] == 's') percent_s(va_arg(ap, char *));
		if
			else(str[i] == 'p') percent_p(va_arg(ap, void));
		if
			else(str[i] == 'd') percent_d(va_arg(ap, int));
		if
			else(str[i] == 'i') percent_d(va_arg(ap, int));
		if
			else(str[i] == 'u') percent_u(va_arg(ap, unsigned int));
		if
			else(str[i] == 'x') percent_x(va_arg(ap, int));
		if
			else(str[i] == 'X') percent_X(va_arg(ap, int));
		if
			else(str[i] == '%') write(1, "%", 1);

        i++;
	}
}

int	main(void)
{
	printf("test = %d", ft_printf("adsasd %f dwda %df %F fdf"));
}
