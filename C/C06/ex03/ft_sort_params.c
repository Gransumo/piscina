/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:28:57 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/12 17:28:59 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

void ft_swap_arg()
{
	
}

void	sort_arg(char *args[], int size)
{
	int		i;
	int 	j;
	char	*aux;

	i = 1;
	j = 0;
	while (i < size - 2)
	{
		if (args[i][j] < args[i + 1][j])
			i++;
		if (args[i][])
		{
			/* code */
		}
		
		if (args[i][0] > args[i + 1][0])
		{
			aux = args[i];
			args[i] = args[i + 1];
			args[i + 1] = aux;
			i = 1;
		}
	}
}

int main(int argc, char *argv[])
{
	(void)argc;
	sort_arg(argv, argc);
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
