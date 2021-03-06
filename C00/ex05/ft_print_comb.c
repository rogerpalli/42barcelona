/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:49:10 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/07 14:21:56 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	number[3];

	number[0] = '0' -1;
	while (++number[0] <= '7')
	{
		number[1] = number[0];
		while (++number[1] <= '8')
		{
			number[2] = number[1];
			while (++number[2] <= '9')
			{				
				write(1, &number[0], 1);
				write(1, &number[1], 1);
				write(1, &number[2], 1);
				if (number[0] != '7' || number[1] != '8' || number[2] != '9')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}
