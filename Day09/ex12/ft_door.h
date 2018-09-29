/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andstefa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 16:07:51 by andstefa          #+#    #+#             */
/*   Updated: 2018/09/27 16:12:19 by andstefa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# define TRUE 1
# define FALSE 0

typedef int	t_bool;

struct	s_door
{
	int	state;
};

typedef struct s_door	t_door;

# define OPEN 1
# define CLOSE 0

# define EXIT_SUCCESS 0

void	ft_putstr(char *str);
t_bool	is_door_open(t_door *door);
t_bool	open_door(t_door *door);
t_bool	close_door(t_door *door);
t_bool	is_door_close(t_door *door);

#endif
