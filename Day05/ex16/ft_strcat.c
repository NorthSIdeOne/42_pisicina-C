/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/25 12:28:23 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/25 12:57:31 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		last_position;

	i = 0;
	while (dest[i] != '\0')
		i++;
	last_position = i;
	i = 0;
	while (src[i] != '\0')
	{
		dest[last_position + i] = src[i];
		i++;
	}
	dest[last_position + i] = '\0';
	return (dest);
}
