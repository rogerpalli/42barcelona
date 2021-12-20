/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/20 14:53:41 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int n;
	char str1[] = "Abcd";
	char str2[] = "Abcde";
	
//	n = strcmp(str1, str2);
//	printf("%d\n", n);
	printf("El primer string es: %s\n", str1);
	printf("El segundo string es: %s\n", str2);
//	printf("%c", str1[0]);
//	if (str1[0] < str2[0])
//		printf("Mas peque");
	n = ft_strcmp(str1,str2);
	if (n > 0)
		printf("El primer string es mas grande que el segundo");
	else if (n == 0)
		printf("Los dos strings son iguales");
	else if (n < 0)
		printf("El primer string es mas pequeno que el segundo");
}

