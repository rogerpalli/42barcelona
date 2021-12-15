/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/15 16:40:17 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char str1[] = "Hello world!";
	char str2[20];
	
	printf("El string de origen es:%s\n", str1);
	ft_strcpy(str2,str1);
	printf("El string de destino es:%s\n", str2);
}
