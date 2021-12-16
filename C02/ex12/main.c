/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/16 18:40:39 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char str[] = "Solo se que nada";
	char *str_ptr;
	
	str_ptr = &str;
	printf("El string de origen es:%s\n", str);
	ft_print_memory(str_ptr, 16);
}
