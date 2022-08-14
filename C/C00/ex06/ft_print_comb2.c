/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:17:31 by gcastro-          #+#    #+#             */
/*   Updated: 2021/09/30 16:17:34 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	g_a;
int	g_b;

void	ft_print_comb2(void)
{
	g_a = 0;
	while (g_a <= 98)
	{
		g_b = g_a + 1;
		while (g_b <= 99)
		{
			ft_putchar (g_a / 10 + '0');
			ft_putchar (g_a % 10 + '0');
			ft_putchar (' ');
			ft_putchar (g_b / 10 + '0');
			ft_putchar (g_b % 10 + '0');
			if (g_a != 98 || g_b != 99)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}
			g_b++;
		}
		g_a++;
	}
}
