/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cespinos <cespinos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:53:50 by cespinos          #+#    #+#             */
/*   Updated: 2021/10/12 20:51:11 by cespinos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = nb;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (a > 1)
	{
		nb = nb * (a - 1);
		a--;
	}
	return (nb);
}
