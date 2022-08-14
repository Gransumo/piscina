/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:26:14 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/05 12:26:17 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[i] == '\0')
		x = 1;
	while (str[i] != '\0')
	{
		if (str[i] > 64 && str[i] < 91)
		{
			i++;
			x = 1;
		}
		else
		{
			x = 0;
			break ;
		}
	}
	return (x);
}
