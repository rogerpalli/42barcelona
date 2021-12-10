/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:28:23 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/10 14:27:57 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int j;
	int k;
	
	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
	//	printf("%d, ", tab[i]);
		k = tab[i];
		tab[i] = tab[j];
		tab[j] = k;
		printf("%d, %d, %d, %d", i, j, tab[i], tab[j]);
		i++;
		j--;
	}
}
