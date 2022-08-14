/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:04:25 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/10 12:04:27 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int		ft_rein_value(char *str);
void	ft_write_text(char *num, int size, char **matrix);
char	**open_read(void);

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		char	*chain;
		int		n;
		char	**matrix;

		chain = argv[1];
		n = ft_rein_value (chain);
		if (n == 0)
		{
			write(1, "ERROR", 5);
			write(1, "\n", 1);
			return (0);
		}
		matrix = open_read();
		ft_write_text (chain, n, matrix);
		return (0);
	}
}
