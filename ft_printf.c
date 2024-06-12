/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:33:29 by siligh            #+#    #+#             */
/*   Updated: 2024/06/12 13:39:57 by siligh           ###   ########.fr       */
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
			tank += percent_c(va_arg(ap, int));
		else if (str[i] == 's')
			tank += percent_s(va_arg(ap, char *));
		else if (str[i] == 'p')
			tank += percent_p(va_arg(ap, void *));
		else if (str[i] == 'd')
			tank += percent_d(va_arg(ap, int));
		else if (str[i] == 'i')
			tank += percent_d(va_arg(ap, int));
		else if (str[i] == 'u')
			tank += percent_u(va_arg(ap, unsigned int));
		else if (str[i] == 'x')
			tank += percent_x(va_arg(ap, int));
		else if (str[i] == 'X')
			tank += percent_xx(va_arg(ap, int));
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

/*int	main(void)
{
	char			*s;
	char			c;
	int				d;
	int				i;
	unsigned int	u;
	void			*p;

	s = "basdonjour";
	c = 't';
	d = 524563;
	i = 797;
	u = 182;
	p = (void *)0x12345679;
	ft_printf("test1 = %c test2 = %s test3 = %p test4 = %d test5 = %i test6 =
		%u test7 = %x test8 = %X test9 = %%", c, s, p, d, i, u, i, d);
	write(1, "\n", 1);
	printf(" || size = %d ||", ft_printf("test1 = %c test2 = %s test3 =
			%p test4 = %d test5 = %i test6 = %u test7 = %x test8 = %X test9 =
			%%", c, s, p, d, i, u, i, d));
	printf("\ntest1 = %c ", c);
	printf("test2 = %s ", s);
	printf("test3 = %p ", p);
	printf("test4 = %d ", d);
	printf("test5 = %i ", i);
	printf("test6 = %u ", u);
	printf("test7 = %x ", i);
	printf("test8 = %X ", d);
	printf("test9 = %% ");
}*/
