/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:05:17 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 14:43:00 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		i;
	int		*range_vector;

	i = 0;
	if (min >= max)
		return (NULL);
	if (min < 0 && max < 0)
		range_vector = malloc(sizeof(int) * (-1) * (min + max));
	else if (min < 0 && max > 0)
		range_vector = malloc(sizeof(int) * (-min + max));
	else if (min > 0 && max < 0)
		range_vector = malloc(sizeof(int) * (min - max));
	else
		range_vector = malloc(sizeof(int) * (min + max));
	while (min < max)
	{
		range_vector[i] = min;
		min++;
		i++;
	}
	return (range_vector);
}
