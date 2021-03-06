/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 19:43:16 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/20 11:08:55 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		aux;
	int		aux_reverse_cpy;
	int		p;
	char	c_nr;

	aux = nb;
	p = 1;
	aux_reverse_cpy = 0;
	while (aux > 0)
	{
		aux_reverse_cpy = aux_reverse_cpy * 10;
		aux_reverse_cpy = aux_reverse_cpy + aux % 10;
		aux = aux / 10;
	}
	while (aux_reverse_cpy > 0)
	{
		ft_putchar(aux_reverse_cpy % 10 + '0');
		aux_reverse_cpy = aux_reverse_cpy / 10;
	}
}
