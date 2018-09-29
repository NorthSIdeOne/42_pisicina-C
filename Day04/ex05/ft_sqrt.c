/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:07:31 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/22 18:28:27 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	while (i * i != nb)
	{
		if (i * i > nb)
			break ;
		i++;
	}
	if (i * i == nb)
		return (i);
	return (0);
}
