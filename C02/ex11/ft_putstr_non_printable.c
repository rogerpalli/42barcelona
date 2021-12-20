/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:47:40 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/20 14:05:49 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_hex(int hex)
{
	if (hex > 9 && hex < 16)
		ft_putchar(hex +87);
	else 
		ft_putchar(hex + '0');
}

void	ft_putstr_non_printable(unsigned char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 127)
		{
			ft_putchar('\\');
			if (str[i] >= 0 && str[i] < 16)
				ft_putchar('0');
			else
				ft_hex(str[i] / 16);
			ft_hex(str[i] % 16);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
