/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:27:37 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/07 19:27:39 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;
	char	*dest;

	size = ft_strlen(to_find);
	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		if (str[i] == to_find[j])
			j++;
		else if (j == size)
			break ;
		else
			j = 0;
		i++;
	}
	dest = &str[i - j];
	if (j != size)
		dest = ((char *)0);
	return (dest);
}
