/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 11:10:30 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/24 17:22:29 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	size = ft_strlen(to_find);
	if (size == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (j == size - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0)
}

