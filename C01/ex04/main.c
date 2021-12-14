/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/10 11:06:04 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int i;
    int j;
	int *i_ptr;
	int *j_ptr;

    i = 45;
    j = 10;
	i_ptr = &i;
	j_ptr = &j;
    printf("el resultado de la division es %d\n", i / j);
    printf("el resto de la division es %d\n", i % j);
    ft_ultimate_div_mod(i_ptr,j_ptr);
    printf("el resultado de la division es %d\n", *i_ptr);
    printf("el resto de la division es %d\n", *j_ptr);
}
