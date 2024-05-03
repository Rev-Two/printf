/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arevilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:20:40 by arevilla          #+#    #+#             */
/*   Updated: 2024/04/20 01:24:38 by arevilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static size_t	ft_strlen(char *s)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

static void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == 0)
		return (ptr);
	while (i < count * size)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

static char	*new_string(unsigned long value, int *len)
{
	int				i;
	unsigned long	temp;
	char			*str;

	i = 0;
	temp = value;
	while (temp != 0)
	{
		temp = temp / 16;
		i++;
	}
	str = ft_calloc(i + 1, sizeof(char));
	*len = i - 1;
	return (str);
}

int	ft_print_pointer(unsigned long value, int asc)
{
	unsigned long	temp_val;
	char			*printout;
	int				i;
	int				*iptr;

	iptr = &i;
	temp_val = value;
	printout = new_string(value, iptr);
	if (!printout)
		return (0);
	while (temp_val != 0 && i-- >= 0)
	{
		if ((temp_val % 16) < 10)
			printout[i + 1] = (temp_val % 16) + 48;
		else
			printout[i + 1] = (temp_val % 16) + asc;
		temp_val = temp_val / 16;
	}
	i = ft_strlen(printout);
	i = i + ft_print_string("0x");
	ft_print_string(printout);
	free(printout);
	if (value == 0)
		i += ft_print_charact('0');
	return (i);
}
