/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 13:03:56 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/25 13:33:55 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		last_position;

	i = 0;
	while (dest[i] != '\0')
		i++;
	last_position = i;
	i = 0;
	while (src[i] != '\0' && (last_position + i < size - 1))
	{
		if (last_position + i < size - 1)
			dest[last_position + i] = src[i];
		i++;
	}
	dest[last_position + i] = '\0';
	return (last_position + i);
}
