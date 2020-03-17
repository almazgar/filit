/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:45:40 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/11 17:34:46 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		check_put(char **tet, char **sq, int x1, int y1)
{
	int			x;
	int			y;
	t_tet		pl;

	x = -1;
	pl.x = ft_x(tet);
	pl.y = ft_y(tet);
	pl.s = dimens(sq);
	while (++x < 4)
	{
		y = -1;
		while (++y < 4)
		{
			if (tet[x][y] != '.')
			{
				if (IFX >= pl.s || IFY >= pl.s || sq[IFX][IFY] != '.')
				{
					clear_tet(sq, ft_tet_char(tet), pl.s);
					return (0);
				}
				sq[IFX][IFY] = tet[x][y];
			}
		}
	}
	return (1);
}
