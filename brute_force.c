/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brute_force.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 13:52:56 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 16:18:14 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		brute_force(char ***tet, char **sq, int index, int r)
{
	int		x;
	int		y;
	int		size;

	x = -1;
	size = dimens(sq);
	while (++x < size)
	{
		y = -1;
		while (++y < size)
		{
			if (check_put(tet[index], sq, x, y))
			{
				if ((index + 1) < NT)
					brute_force(tet, sq, index + 1, r);
				else
					print_sq(sq, size, tet, r);
				clear_tet(sq, ft_tet_char(tet[index]), size);
			}
		}
	}
}
