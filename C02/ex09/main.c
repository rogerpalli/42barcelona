/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/17 14:10:55 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char str1[] = "ReKT17+LOL MDR Mdr 4242L42";
	
	printf("El string de origen es:%s\n", str1);
	ft_strcapitalize(str1);
	printf("El string con palabras Capitales es: %s\n", str1);
}
