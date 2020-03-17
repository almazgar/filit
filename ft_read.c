/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:17:40 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/28 14:16:28 by avenonat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_read(int fd, char *buf)
{
	int r;
	int i;
	int ei;

	r = read(fd, buf, 600);
	close(fd);
	if (r > 545 || r < 20)
	{
		ft_putendl("error");
		return (0);
	}
	i = 0;
	ei = 0;
	while (i < r)
	{
		if (checkin1(&buf[i]) == 0 || checkin2(&buf[i]) == 0)
			ei = 1;
		i = i + 21;
	}
	if (ei || !checkin3(buf, r))
	{
		ft_putendl("error");
		return (0);
	}
	return (r);
}
