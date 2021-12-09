/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:49:10 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/09 12:39:45 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char	number1[2];
	char	number2[2];

	number1[0] = '0' -1;
	while (++number1[0] <= '9')
	{
		number1[1] = '0' -1;
		while (++number1[1] <= '8')
		{
			number2[0] = '0' -1;
			/*number2[0] = number1[0];*/
			while (++number2[0] <= '9')
			{
				number2[1] = number1[1] -1;
				/*number2[1] = '0' -1;*/
				while (++number2[1] <= '9')
				{					
					write(1, &number1[0], 1);
					write(1, &number1[1], 1);
					write(1, " ", 1);
					write(1, &number2[0], 1);
					write(1, &number2[1], 1);
					if (number1[0] != '9' || number1[1] != '8' || number2[0] != '9' || number2[1] != '9')
					{
						write(1, ", ", 2);
					}
				}
			}	
		}
	}
}
