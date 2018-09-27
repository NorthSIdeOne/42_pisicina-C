/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 10:43:55 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/25 11:41:32 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		check;

	i = 0;
	while (str[i] != '\0')
	{
		check = 0;
		while ((str[i] >= 97 && str[i] <= 122))
		{
			if (check == 0 && (str[i] >= 97 && str[i] <= 122))
			{
				str[i] = str[i] - 32;
				check = 1;
			}
			i++;
		}
		i++;
	}
	return (str);
}
