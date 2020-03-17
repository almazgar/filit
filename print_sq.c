/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_sq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 11:29:15 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 10:28:55 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	print_sq(char **sq, int size, char ***tet, int r)
{
	int i;

	if (sq == NULL)
	{
		ft_putendl("NO");
		return ;
	}
	i = 0;
	while (i < size)
	{
		ft_putendl(sq[i]);
		i++;
	}
	sq_free(sq, size);
	tet_free(tet, r);
	exit(1);
}
