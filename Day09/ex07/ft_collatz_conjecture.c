/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:37:26 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 15:37:59 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if (!(base % 2))
		base = base / 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}
