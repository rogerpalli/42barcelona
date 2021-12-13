/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:28:23 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/13 17:34:14 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < (size -1))
	{
		if (tab[i] > tab[i + 1])
		{
			k = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = k;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
