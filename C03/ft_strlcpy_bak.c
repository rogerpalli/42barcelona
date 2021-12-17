/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcopy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:47:40 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/15 16:07:32 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		i++;
	}	
	while (j < size)
	{
		src[i] = dest[j];
		++j;
		++i;
	}
	src[i] = '\0';
	return (i);
}
