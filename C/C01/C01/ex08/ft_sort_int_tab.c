/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:12:43 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/04 14:12:48 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	while (i <= size - 3)
	{
		if (tab[i] <= tab[i + 1])
		{
			i++;
		}
		if (tab [i] > tab [i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
	}
}
