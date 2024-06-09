/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siligh <siligh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:36:01 by siligh            #+#    #+#             */
/*   Updated: 2024/06/09 19:05:44 by siligh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

void	percent_c(char c);
void	percent_s(char *str);
void	percent_p(void *hex);
void	percent_d(double n);
void	percent_u(unsigned int nb);
void	percent_x(int hex);
void	percent_X(int hex);

#endif