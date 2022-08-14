/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:27:50 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/12 17:27:52 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	varInt[3];

	varInt[0] = 0;
	varInt[1] = 0;
	varInt[2] = 0;
	while (str[varInt[0]] == ' '\
		|| (str[varInt[0]] >= '\t' && str[varInt[0]] <= '\r'))
		varInt[0]++;
	while (str[varInt[0]] == 45 || str[varInt[0]] == 43)
	{
		if (str[varInt[0]] == 45)
			varInt[2]++;
		varInt[0]++;
	}
	if (!(str[varInt[0]] >= '0' && str[varInt[0]] <= '9'))
		return (0);
	while (str[varInt[0]] >= '0' && str[varInt[0]] <= '9')
	{
		varInt[1] = (varInt[1] * 10) + (str[varInt[0]] - '0');
		varInt[0]++;
	}
	if (varInt[2] % 2 != 0)
		varInt[1] = -varInt[1];
	return (varInt[1]);
}

int main()
{
	char str[] = "			    ---+-12345";
	int x;
	x = ft_atoi(str);
	printf("%i", x);
	return (0);
}
