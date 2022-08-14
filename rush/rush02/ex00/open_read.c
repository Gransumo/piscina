/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_read.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:03:54 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/10 12:03:56 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void	asing_value(char **matrix)
{
	int		i;
	int		j;
	int		fd;
	ssize_t	n_bytes;
	char	buf;

	i = 0;
	j = 0;
	fd = open ("~/numbers", O_RDONLY);
	n_bytes = read(fd, &buf, 1);
	while (n_bytes == 1)
	{
		matrix[i][j] = buf;
		n_bytes = read(fd, &buf, 1);
		if (buf == '\n')
		{
			i++;
			j = 0;
		}
		j++;
	}
	close(fd);
}

char	**create(int *varInt)
{
	char	**matrix;

	matrix = (char**) malloc(varInt[2] * sizeof(char *));
	varInt[4] = 0;
	while (varInt[4] < varInt[2])
	{
		*matrix[varInt[4]] = (char) malloc(varInt[3] * sizeof(char));
		varInt[4]++;
	}
	asing_value(matrix);
	return (matrix);
}

char	**open_read(void)
{
	int		varInt[5];
	varInt[0] = 0;
	varInt[1] = 0;
	varInt[2] = 0;
	varInt[3] = 0;
	char	buf;
	ssize_t	n_bytes;

	varInt[0] = open ("~/numbers", O_RDONLY);
	n_bytes = read(varInt[0], &buf, 1);
	while (n_bytes == 1)
	{
		n_bytes = read(varInt[0], &buf, 1);
		varInt[1]++;
		if (buf == '\n')
		{
			varInt[2]++;
			if (varInt[3] < varInt[1])
				varInt[3] = varInt[1];
		}
		varInt[1] = 0;
	}
	close(varInt[0]);
	return (create (varInt));
}
