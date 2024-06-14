/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:36:01 by siligh            #+#    #+#             */
/*   Updated: 2024/06/14 19:56:17 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <unistd.h>

int ft_printf(const char *str, ...);
int percent_c(char c);
int percent_s(char *str);
int percent_d(int n);
int percent_u(unsigned int n);
int percent_x(unsigned int n);
int percent_xx(unsigned int n);
int percent_p(void *ptr);

#endif
