/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/15 16:11:35 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	int n;
	char str1[] = "Que tal?";
	char str2[] = "Genial!";
	
	printf("La primera frase es: %s\n", str1);
	printf("La segunda frase es: %s\n", str2);
	n = ft_strlcpy(str2,str1,7);
	printf("El string concatenado: %s\n", str1);
	printf("El total de caracteres es: %d\n", n);
}
