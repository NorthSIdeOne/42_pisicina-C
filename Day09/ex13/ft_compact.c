/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:14:53 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 16:15:08 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int length)
{
	int	index;
	int	size;

	index = 0;
	size = length;
	while (index < length)
	{
		if (!tab[index])
			size--;
	}
	return (size);
}
