/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 13:00:02 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/25 13:02:30 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		last_position;

	i = 0;
	while (dest[i] != '\0')
		i++;
	last_position = i;
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[last_position + i] = src[i];
		i++;
	}
	dest[last_position + i] = '\0';
	return (dest);
}
