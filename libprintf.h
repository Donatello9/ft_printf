/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:36:01 by siligh            #+#    #+#             */
/*   Updated: 2024/06/12 13:39:52 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	percent_c(char c);
int	percent_s(char *str);
int	percent_p(void *ptr);
int	percent_d(int n);
int	percent_u(unsigned int nb);
int	percent_x(unsigned long long n);
int	percent_xx(unsigned long long n);

#endif
