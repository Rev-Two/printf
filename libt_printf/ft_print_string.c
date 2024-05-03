/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 14:29:29 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/20 01:15:14 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		write (fd, s, 1);
		s++;
	}
}

int	ft_print_string(char *s)
{
	unsigned int	i;

	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	ft_putstr_fd(s, 1);
	return (i);
}
