/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvasanc <alvasanc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:20:16 by alvasanc          #+#    #+#             */
/*   Updated: 2023/12/18 13:05:47 by alvasanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *string);
int	ft_printunint(unsigned int number);
int	ft_printf(const char *format, ...);
int	ft_putdeci(int number);
int	ft_puthexa(unsigned long i, char c);

#endif
