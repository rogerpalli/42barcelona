/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:30:35 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/14 17:48:18 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_lowercase(char *str);

int	main(void)
{
	char str1[] = "asbdbcvbA";
	
	printf("El string de origen es:%s\n", str1);
	ft_str_is_lowercase(str1);
	if (ft_str_is_lowercase(str1))
	{
		printf("El string contiene solo caracteres en minusculas");
	}
	else
	{
		printf("El string contiene caracteres no solo en minusculas");
	}
}
