/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guvargas <guvargas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:05:55 by guvargas          #+#    #+#             */
/*   Updated: 2021/10/14 15:11:18 by guvargas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long int	i;
	long int	diference;
	int			*dest;

	diference = (long int)max - (long int)min;
	i = -1;
	if (diference <= 0)
	{
		*range = 0;
		return (0);
	}
	dest = malloc((sizeof(int) * diference));
	if (dest == NULL)
		return (0);
	while (++i < diference)
		dest[i] = (long int)min + i;
	*range = dest;
	return (diference);
}