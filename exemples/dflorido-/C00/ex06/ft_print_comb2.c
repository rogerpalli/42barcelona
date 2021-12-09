/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorido <dflorido@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:51:28 by dflorido          #+#    #+#             */
/*   Updated: 2021/12/09 00:23:35 by dflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putint(int n)
{
	if (n < 0)
	{
		ft_putchar('0');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putint(n / 10);
		ft_putint(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putint_multiple(int i, int j)
{
	if (i < 10)
		ft_putchar('0');
	ft_putint(i);
	ft_putchar(' ');
	if (j < 10)
		ft_putchar('0');
	ft_putint(j);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 98)
	{
		while (j <= 99)
		{
			ft_putint_multiple(i, j);
			if (i == 98 && j == 99)
			{
				ft_putchar(0);
			}
			else
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
