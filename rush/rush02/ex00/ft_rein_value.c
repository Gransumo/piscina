/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rein_value.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:03:44 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/10 12:03:45 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rein_value(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (str[0] != ' ')
		return (0);
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == 45)
			return (0);
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
			return (0);
		i++;
	}
	while (str[i + j] >= '0' && str[i + j] <= '9')
	{
		str[j] = str[i + j];
		j++;
		i++;
	}
	if (str[i] == 46 || str[i] == 44)
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			return (0);
	return (j);
}
