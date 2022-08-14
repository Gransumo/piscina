/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:26:00 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/06 10:29:27 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int i;
	
	if (min >= max)
		return 0;
	
	i = 0;
	int *result = malloc( (max -min) * sizeof(int));
	if (result == NULL)
		return (0);
	while((min) < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return result;
}