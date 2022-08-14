/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcastro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 15:06:59 by gcastro-          #+#    #+#             */
/*   Updated: 2021/10/05 15:07:00 by gcastro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	ft_strupcase(char str, char preStr)
{
	if (preStr >= ' ' && preStr <= '/')
		str -= 32;
	else if (preStr >= ':' && preStr <= '@')
		str -= 32;
	else if (preStr >= '[' && preStr <= '`')
		str -= 32;
	else if (preStr >= '{')
		str -= 32;
	return (str);
}

char	ft_strlowcase(char str, char preStr)
{
	if ((preStr >= 'a' && preStr <= 'z') || (preStr >= 'A' && preStr <= 'Z'))
		str += 32;
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = ft_strlowcase(str[i], str[i - 1]);
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = ft_strupcase(str[i], str[i - 1]);
		i++;
	}
	return (str);
}
