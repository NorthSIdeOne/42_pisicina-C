/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/24 09:58:22 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/24 17:21:41 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		nr;

	i = 0;
	nr = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57 || str[0] == 43 || str[0] == 45)
		{
			if (str[i] != 43 && str[i] != 45)
				nr = (nr * 10) + (str[i] - '0');
			i++;
		}
		else
			break ;
	}
	if (str[0] == 45)
		nr = nr * (-1);
	if (nr < (-2147483648))
		nr = 2147483647 + (2147483648 + nr);
	else if (nr > 2147483647)
		nr = (nr - 2147483647) - 2147483648;
	return (nr);
}
