/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:00:46 by gcastro-          #+#    #+#             */
/*   Updated: 2021/09/30 16:17:24 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	c[3];

	c[0] = '0';
	while (c[0] <= '7')
	{
		c[1] = c[0] + 1;
		while (c[1] <= '8')
		{
			c[2] = c[1] + 1;
			while (c[2] <= '9')
			{
				write(1, &c, 3);
				if (!(c[0] == '7' && c[1] == '8' && c[2] == '9'))
				{
					write(1, ", ", 2);
				}
				c[2]++;
			}
			c[1]++;
		}
		c[0]++;
	}
}
