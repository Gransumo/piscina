/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-g <mortiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:01:35 by mortiz-g          #+#    #+#             */
/*   Updated: 2021/10/12 18:12:26 by mortiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char	next_char;
	int		i;

	i = 0;
	while (42)
	{
		next_char = *str;
		if (next_char == 0)
		{
			write(1, "\n", 1);
			break ;
		}
		ft_putchar(next_char);
		str++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temp;
	int		n;

	n = 1;
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (strcmp(argv[j], argv[i]) < 0)
			{
				ft_swap(&argv[i], &argv[j]);
			}
			j++;
		}
		i++;
	}
	while (n <= argc - 1)
	{
		ft_putstr(argv[n++]);
	}
	return (0);
}
