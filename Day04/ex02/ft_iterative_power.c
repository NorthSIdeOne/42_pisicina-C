/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 17:37:45 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/22 17:48:45 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		nr;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		nr = 1;
		while (power > 0)
		{
			nr = nr * nb;
			power--;
		}
		return (nr);
	}
}
