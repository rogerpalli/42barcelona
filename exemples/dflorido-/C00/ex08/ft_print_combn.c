/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dflorido <dflorido@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 19:27:39 by dflorido          #+#    #+#             */
/*   Updated: 2021/12/08 23:01:32 by dflorido         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int n, char *comb, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(comb[i] + '0');
		i++;
	}
}

void	ft_print_comb_increment(int n, char *comb)
{
	int	i;
	int	max;

	i = n - 1;
	max = 9;
	while (comb[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	comb[i] += 1;
	while (i < n)
	{
		comb[i + 1] = comb[i] +1;
		i += 1;
	}
}

void	ft_print_combn(int n)
{
	int		index;
	char	comb[10];

	index = 0;
	if (n <= 0 || n >= 10)
		return ;
	else
	{
		while (index < n)
		{
			comb[index] = index;
			index++;
		}
		ft_putout(n, comb, 0);
		while (comb[0] != 10 - n || comb[n - 1] != 9)
		{
			if (comb[n - 1] != 9)
				comb[n - 1] += 1;
			else
				ft_print_comb_increment(n, comb);
			ft_putout(n, comb, 1);
		}
	}
}
