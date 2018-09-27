/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:57:56 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 14:44:30 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_string_size(int argc, char **argv)
{
	int		nr;
	int		i;
	int		j;

	i = 0;
	nr++;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			nr++;
			j++;
		}
		i++;
	}
	return (nr);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		nr;
	int		i;
	char	*str;
	int		j;

	i = 1;
	j = 0;
	str = malloc(sizeof(char) * ft_string_size(argc, argv));
	while (i < argc)
	{
		nr = 0;
		while (nr < ft_strlen(argv[i]))
		{
			str[j] = argv[i][nr];
			nr++;
			j++;
		}
		str[j] = '\n';
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}
