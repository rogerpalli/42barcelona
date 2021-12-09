/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/09 19:16:11 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int i;
    int j;
    int *div_ptr;
    int *mod_ptr;

    i = 45;
    j = 10;
    div_ptr = &i;
    mod_ptr = &j;
    printf("el resultado de la division es %d\n", i / j);
    printf("el resto de la division es %d\n", i % j);
    ft_div_mod(i,j,div_ptr,mod_ptr);
    printf("el resultado de la division es %d\n", *div_ptr);
    printf("el resto de la division es %d\n", *mod_ptr);
}
