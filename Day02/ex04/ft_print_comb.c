/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:58:29 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/20 18:48:41 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char	nr_1;
	char	nr_2;
	char	nr_3;

	nr_1 = -1 + '0';
	while (++nr_1 <= '7')
	{
		nr_2 = nr_1;
		while (++nr_2 <= '8')
		{
			nr_3 = nr_2;
			while (++nr_3 <= '9')
			{
				if (nr_3 > '2')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(nr_1);
				ft_putchar(nr_2);
				ft_putchar(nr_3);
			}
		}
	}
}
