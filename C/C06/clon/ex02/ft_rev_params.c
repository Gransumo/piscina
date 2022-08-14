/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mortiz-g <mortiz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:01:24 by mortiz-g          #+#    #+#             */
/*   Updated: 2021/10/12 18:04:12 by mortiz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	argc--;
	while (argv[argc])
	{
		if (argc > 0)
		{
			i = 0;
			while (argv[argc][i])
			{
				write(1, &argv[argc][i], 1);
				i++;
			}
			write(1, "\n", 1);
			argc--;
		}
		else
			return (0);
	}
	return (0);
}
