/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffornes- <ffornes-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 14:52:56 by ffornes-          #+#    #+#             */
/*   Updated: 2021/12/08 16:52:34 by ffornes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	*div;
	int	*mod;
	int	i;
	int	j;
	
	div = &i;
	mod = &j;
	ft_div_mod(10, 2, div, mod);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
}
