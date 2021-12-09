/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffornes- <ffornes-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:43:50 by ffornes-          #+#    #+#             */
/*   Updated: 2021/12/08 16:53:33 by ffornes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Hola";
	int	i;

	i = ft_strlen(str);
	printf("%d\n", i);
	return (0);
}
