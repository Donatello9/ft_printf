/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:10:46 by siligh            #+#    #+#             */
/*   Updated: 2024/06/14 19:57:14 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putnbr_base(unsigned long nbr, char *base)
{
	int	base_len;
	int	s;

	base_len = 0;
	s = 0;
	while (base[base_len])
		base_len++;
	if (nbr >= (unsigned long)base_len)
	{
		s += ft_putnbr_base(nbr / base_len, base);
		s += ft_putnbr_base(nbr % base_len, base);
	}
	else
	{
		s += write(1, &base[nbr], 1);
	}
	return (s);
}

int	percent_p(void *ptr)
{
	unsigned long	addr;
	int				s;

	s = 0;
	if (!ptr)
	{
		s += write(1, "(nil)", 5);
	}
	else
	{
		addr = (unsigned long)ptr;
		s += write(1, "0x", 2);
		s += ft_putnbr_base(addr, "0123456789abcdef");
	}
	return (s);
}
