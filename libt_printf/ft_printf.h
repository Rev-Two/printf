/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 01:34:43 by arevilla          #+#    #+#             */
/*   Updated: 2024/05/02 12:47:17 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *imput, ...);
int	ft_print_charact(char c);
int	ft_print_string(char *s);
int	ft_print_pointer(unsigned long value, int asc);
int	ft_print_int(int n);
int	ft_print_unsi(unsigned int nb);
int	ft_print_hex(unsigned int value, int asc);

#endif
