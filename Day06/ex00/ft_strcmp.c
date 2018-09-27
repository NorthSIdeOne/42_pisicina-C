/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 14:48:20 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/25 16:14:13 by andstefa         ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		limit;

	i = 0;
	if (ft_strlen(s1) > ft_strlen(s2))
		limit = ft_strlen(s2);
	else
		limit = ft_strlen(s1);
	while (i < limit)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		else
			i++;
	}
	if (s1[limit] == s2[limit])
		return (0);
	else if (s1[limit] > s2[limit])
		return (1);
	return (-1);
}
