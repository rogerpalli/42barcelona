/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:49:10 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/08 17:34:37 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	li;

	li = nb;
	if (li < 0)
	{
		ft_putchar('-');
		li = -li;
	}
	if (li > 9)
	{
		ft_putnbr(li / 10);
		ft_putnbr(li % 10);
	}
	else
		ft_putchar(li + '0');
}
