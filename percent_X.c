/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent_X.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:16:41 by siligh            #+#    #+#             */
/*   Updated: 2024/06/12 13:39:42 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	percent_xx(unsigned long long n)
{
	char				tab[] = "0123456789ABCDEF";
	unsigned long long	nb;
	char				*resu;
	int					i;
	int					s;
	int					temp;

	nb = n;
	i = 0;
	s = 0;
	temp = nb;
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
		free(resu);
		return (1);
	}
	while (nb > 0)
	{
		resu[i] = tab[nb % 16];
		nb /= 16;
		i++;
	}
	while (i > 0)
	{
		i--;
		s++;
		write(1, &resu[i], 1);
	}
	free(resu);
	return (s);
}
