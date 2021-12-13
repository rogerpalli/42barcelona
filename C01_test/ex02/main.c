/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/09 18:42:23 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b);

int	main(void)
{
	int i;
    int j;
    int *i_ptr;
    int *j_ptr;

    i = 20;
    j = 25;
    i_ptr = &i;
    j_ptr = &j;
    printf("i es igual a %d\n", i);
    printf("j es igual a %d\n", j);
    ft_swap(i_ptr,j_ptr);
    printf("i es igual a %d\n", i);
    printf("j es igual a %d\n", j);
}
