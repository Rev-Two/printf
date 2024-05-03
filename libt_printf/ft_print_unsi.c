/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 18:04:52 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/20 01:28:06 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}

static void	ft_rem(unsigned int nb)
{
	if (nb > 9)
		ft_print_unsi(nb / 10);
	if (nb <= 9)
	{
		ft_putchar_fd(nb + 48, 1);
		return ;
	}
	ft_putchar_fd((nb % 10) + 48, 1);
}

int	ft_print_unsi(unsigned int nb)
{
	int unsigned	i;

	ft_rem(nb);
	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
