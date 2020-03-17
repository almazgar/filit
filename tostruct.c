/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tostruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:54:28 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/14 10:16:26 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		tostruct(char ***tet, char *buf, int index, int r)
{
	int		n;
	char	c;
	t_tet	pl;

	n = -1;
	c = 64;
	while (++n < NT && c++)
	{
		pl.x = -1;
		while (++pl.x < 4)
		{
			pl.y = 0;
			while (pl.y < 4)
			{
				if (buf[index] != '\n')
				{
					tet[n][pl.x][pl.y] = buf[index];
					if (buf[index] == '#')
						tet[n][pl.x][pl.y] = c;
					pl.y++;
				}
				index++;
			}
		}
	}
}
