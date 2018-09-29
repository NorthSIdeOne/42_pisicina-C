/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/22 16:20:09 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/24 14:59:35 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		nr;

	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		nr = 1;
		while (nb > 0)
		{
			nr = nr * nb;
			nb--;
		}
		return (nr);
	}
}
