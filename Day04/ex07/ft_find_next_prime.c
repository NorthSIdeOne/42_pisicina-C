/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 18:47:26 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/22 19:04:16 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		i;

	if (nb < 0)
		nb = nb * (-1);
	else if (nb == 0 || nb == 1 || nb == 2)
		return (2);
	else
	{
		i = 2;
		while (i < nb / 2)
		{
			if (nb % i == 0)
			{
				return (ft_find_next_prime(nb + 1));
			}
			i++;
		}
	}
	return (nb);
}
