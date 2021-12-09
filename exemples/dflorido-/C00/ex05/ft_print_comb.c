/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorido <dflorido@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:15:03 by dflorido          #+#    #+#             */
/*   Updated: 2021/12/04 19:21:39 by dflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char c1, char c2, char c3)
{
	ft_putchar(c1 + 48);
	ft_putchar(c2 + 48);
	ft_putchar(c3 + 48);
	if (c1 != 7 || c2 != 8 || c3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	while (n1 <= 7)
	{
		n2 = n1 + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				ft_putchar_multiple(n1, n2, n3);
				n3++;
			}
			n2++;
		}	
		n1++;
	}
}
