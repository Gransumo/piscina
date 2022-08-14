/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 12:04:07 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/10 12:04:09 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

void ft_three_num(char *num, int rest, char **matrix)
{
	int i;
	int j;
	int largue;

	i = 0;
	j = 0;
	largue = 0;
	if (rest == 1)
	{
		while (matrix[i][j] != num[0])
		{
			j++;
			if (matrix[i][j] == '\n')
			{	
				i++;
				j = 0;
			}
		}
		while (!(matrix[i][j] > 96 && matrix[i][j] < 123))
			j++;
		while (matrix[i][j] > 96 && matrix[i][j] < 123)
		{
			write(1, &matrix[i][j], 1);	
			j++;	
		}
		j = 0;
	}

	if (rest == 2)
	{
		while (largue != 2 && matrix[i][j] != num[0])
		{
			while (matrix[i][j] > 47 && matrix[i][j] < 58)
				j++;
			largue = j;
			if (largue != 2)
			{
				i++;
				j = 0;
			}
		}
		while (matrix[i][j] != num[0])
			i++;
		if (num[0] == '1')
		{
			j++;
			while (matrix[i][j] != num[1])
			{
				i++;
			}
			if (matrix[i][j] == num[0] && matrix[i][j] == num[1])
			{
				while (!(matrix[i][j] > 96 && matrix[i][j] < 123))
					j++;
				while (matrix[i][j] > 96 && matrix[i][j] < 123)
				{
					write(1, &matrix[i][j], 1);
					j++;
				}
			}
		}
		else
		{
			while (!(matrix[i][j] > 96 && matrix[i][j] < 123))
				j++;
			while (matrix[i][j] > 96 && matrix[i][j] < 123)
			{
				write(1, &matrix[i][j], 1);
				j++;
			}
			rest = 1;
			ft_three_num(&num[2], rest, matrix);
		}
	}
	
	if (rest == 0)
	{
		ft_three_num(&num[0], 1, matrix);
		while (largue != 3)
		{
			while (matrix[i][j] > 47 && matrix[i][j] < 58)
				j++;
			largue = j;
			if (largue != 3)
			{
				i++;
				j = 0;
			}
		}
		while (!(matrix[i][j] > 96 && matrix[i][j] < 123))
			j++;
		while (matrix[i][j] > 96 && matrix[i][j] < 123)
		{
			write(1, &matrix[i][j], 1);
			j++;
		}
		rest = 2;
		ft_three_num(&num[1], rest, matrix);
	}
	
	
	
}

void	ft_write_text(char *num, int size, char **matrix)
{
	int varInt[6];
	int	rest;
	int aux;

	varInt[0] = 0; //i
	varInt[1] = 0; //j
	varInt[2] = 0; //n
	varInt[3] = 0; //largue

	while (varInt[3] / 3 != size / 3)
	{
		if (size % 3 == 0)
			size--;
		while (matrix[varInt[0]][varInt[1]] > 47 && matrix[varInt[0]][varInt[1]] < 58)
			varInt[1]++;
		varInt[3] = varInt[1];
		
		
	}
	while (largue / 3 != size / 3)
	{
		if (size % 3 == 0)
		{
			aux = size;
			size--;
		}
		while (matrix[i][j] > 47 && matrix[i][j] < 58)
			j++;
		largue = j;
		if (largue / 3 != size / 3)
		{
			i++;
			j = 0;
		}
		else if (j / 3 == size / 3)
		{
			size = aux;
			if (size % 3 == 0)
				rest = 0;
			else
				rest = size / 3;
			ft_three_num(&num[0], rest, matrix);
			while (!(matrix[i][j] > 96 && matrix[i][j] < 123))
				j++;
			write(1, " ", 1);
			while (matrix[i][j] > 96 && matrix[i][j] < 123)
			{
				write(1, &matrix[i][j], 1);
				j++;
			}
		}
	}
}

void why_write()
{

}
