/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:47:40 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/17 13:32:34 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(char c)
{
	char	hex1;
	char	hex2;

	ft_putchar('\\');
	hex1 = c / 16;
	hex2 = c % 16;
	if (hex1 < 10)
	{
		ft_putchar(hex1 + 48);
	}
	else
	{
		ft_putchar(hex1 + 87);
	}
	if (hex2 < 10)
	{
		ft_putchar(hex2 + 48);
	}
	else
	{
		ft_putchar(hex2 + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_hex(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
