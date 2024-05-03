/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:50:04 by arevilla          #+#    #+#             */
/*   Updated: 2024/05/02 18:39:50 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

static int	type_check(const char *print, va_list args)
{
	int	i;

	i = 0;
	if (*print == 'c')
		i = i + ft_print_charact(va_arg(args, int));
	else if (*print == 's')
		i = i + ft_print_string(va_arg(args, char *));
	else if (*print == 'p')
		i = i + ft_print_pointer(va_arg(args, unsigned long), 87);
	else if (*print == 'd')
		i = i + ft_print_int(va_arg(args, int));
	else if (*print == 'i')
		i = i + ft_print_int(va_arg(args, int));
	else if (*print == 'u')
		i = i + ft_print_unsi(va_arg(args, unsigned int));
	else if (*print == 'x')
		i = i + ft_print_hex(va_arg(args, unsigned int), 87);
	else if (*print == 'X')
		i = i + ft_print_hex(va_arg(args, unsigned int), 55);
	return (i);
}

int	ft_printf(const char *print, ...)
{
	va_list			args;
	unsigned int	i;

	i = 0;
	va_start(args, print);
	while (*print != '\0')
	{
		if (*print == '%')
		{
			print++;
			if (ft_strchr("cspiduxX", *print))
				i += type_check(print, args);
			else if (*print == '%')
				i = i + ft_print_charact('%');
		}
		else
		{
			i = i + ft_print_charact(*print);
		}
		print++;
	}
	va_end(args);
	return (i);
}
