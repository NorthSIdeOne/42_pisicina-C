/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:23:22 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 14:43:54 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*range_vector;

	i = 0;
	if (min >= max)
		return (0);
	if (min < 0 && max < 0)
		range_vector = (int*)malloc(sizeof(int) * (-1) * (min + max));
	else if (min < 0 && max > 0)
		range_vector = (int*)malloc(sizeof(int) * (-min + max));
	else if (min > 0 && max < 0)
		range_vector = (int*)malloc(sizeof(int) * (min - max));
	else
		range_vector = (int*)malloc(sizeof(int) * (min + max));
	while (min < max)
	{
		range_vector[i] = min;
		min++;
		i++;
	}
	*range = range_vector;
	return (i);
}
