/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/13 18:05:21 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	array[5] = { 2, -3, 1, 5, 4 };
	int i;
	
	i = 0;
	printf("La cadena inicial es:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%d", array[i]);
    }
	ft_sort_int_tab(array, 5);
	printf("\nLa cadena ordenada es:\n");
	i = 0;
	for (i = 0; i < 5; ++i)
    {
		printf("%d", array[i]);
    }
	return(0);
}
