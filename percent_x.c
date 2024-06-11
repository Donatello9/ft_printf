/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:16:41 by siligh            #+#    #+#             */
/*   Updated: 2024/06/11 13:09:37 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	percent_x(int n)
{
	char	tab[] = "0123456789abcdef";
	long	nb;
	char	resu[16];
	int		i;
	int		s;

	nb = n;
	i = 0;
	s = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		s++;
	}
	while (nb > 0)
	{
		resu[i] = tab[nb % 16];
		nb /= 16;
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
