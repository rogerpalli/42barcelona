/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rolopez- <rolopez-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 12:47:40 by rolopez-          #+#    #+#             */
/*   Updated: 2021/12/15 13:27:18 by rolopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;
	int				cap;

	i = 0;
	cap = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (cap == 0)
			{
				str[i] = str[i] - 32;
				cap = 1;
			}
		}
		else
		{
			cap = 0;
		}
		i++;
	}
	return (str);
}
