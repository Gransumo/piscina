/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cespinos <cespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 12:03:48 by cespinos          #+#    #+#             */
/*   Updated: 2021/10/14 14:06:44 by cespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (nb > b)
	{
		a++;
		b = a * a;
		if (nb < b)
			return (0);
	}
	return (a);
}
