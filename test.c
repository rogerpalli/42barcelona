/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 12:20:14 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/19 12:20:34 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int main(int argc, char **str)
{
	int i;

	i = 0;
	if (argc == 1)
	{
		printf("Debes ingresar mas parametros...\n");
		return 1;
	} else
	{
		while (str[1][i])
		{	
			write(1, &str[1][i], 1);
		  	write(1, "\n", 1);
			i++;
		}
	return 0;
	}
} 
