/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 13:52:38 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 14:40:13 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if (((j > i) && (i > k)) || (k > i && i > j))
		return (i);
	else if ((i > j && j > k) || (k > j && j > i))
		return (j);
	else if ((i > k && k > j) || (j > k && k > i))
		return (k);
	else
		return (0);
}
