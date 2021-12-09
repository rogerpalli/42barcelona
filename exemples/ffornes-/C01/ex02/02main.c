/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffornes- <ffornes-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:27:49 by ffornes-          #+#    #+#             */
/*   Updated: 2021/12/08 16:52:01 by ffornes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	i;
	int	j;
	int	*ptr1;
	int	*ptr2;
	
	i = 1;
	j = 2;
	ptr1 = &i;
	ptr2 = &j;
	ft_swap(ptr1, ptr2);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}
