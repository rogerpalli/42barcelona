/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/16 11:57:53 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int n;
	unsigned int total;
	char str1[] = "Hello world!";
	char str2[12];
	
	total = 13;
	printf("La frase original es: %s\n", str1);
	printf("El numero de caracteres a copiar es: %d\n", total);
	n = ft_strlcpy(str2,str1,total);
	printf("La frase copiada es: %s\n", str2);
	printf("Total de caracteres copiados es: %d\n", n);
}
