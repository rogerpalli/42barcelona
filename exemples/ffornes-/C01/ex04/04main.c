/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffornes- <ffornes-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:59:11 by ffornes-          #+#    #+#             */
/*   Updated: 2021/12/08 16:52:59 by ffornes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	*a;
	int *b;
	int	i;
	int	j;

	i = 50;
	j = 10;
	a = &i;
	b = &j;
	ft_ultimate_div_mod(a, b);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}
