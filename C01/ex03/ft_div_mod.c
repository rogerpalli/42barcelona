/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:28:23 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/09 19:24:13 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	int c;
	int *c_ptr;

	c = a / b;
	printf("el resultado de la division es %d\n", c);
	c_ptr = &c;
	printf("el resultado de la division es %d\n", *c_ptr);
	*div = c_ptr;
	printf("el resultado de la division es %d\n", *div);
	c = a % b;
    c_ptr = &c;
    mod = c_ptr;
}
