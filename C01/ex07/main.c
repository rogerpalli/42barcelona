/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/13 13:13:50 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	array[5] = { 1, 2, 3, 4, 5 };
	int i;
	
	i = 0;
	printf("La cadena inicial es:\n");
	for (i = 0; i < 5; ++i)
	{
		printf("%d", array[i]);
    }
	ft_rev_int_tab(array, 5);
	printf("\nLa cadena inversa es:\n");
	i = 0;
	for (i = 0; i < 5; ++i)
    {
		printf("%d", array[i]);
    }
	return(0);
}
