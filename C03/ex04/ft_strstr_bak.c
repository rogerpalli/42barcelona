/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:47:40 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/21 13:46:53 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int len;
	int where;

	i = 0;
	j = 0;
	where = 0;
	len = 0;
	while (to_find[len])
	{
		len++;
	}
	printf("El string a encontrar mide: %d\n", len);
	if (len == 0)
		return (str);
	else
	{
		while (str[i])
		{	
			if (str[i] == to_find[j] && j <= len)
			{
				printf("%c", to_find[j]);
				j++;
				if (j == len)
				printf("final cadena: %d", i-j+1);
				return (&str[i-j+1]);
	//			j++;
			}
			else
				j = 0;
			i++;
		}
	}
	return (0);
}
