/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tostruct2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:03:12 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/14 10:12:14 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		***tostruct2(char *buf, int r)
{
	int		i;
	int		j;
	char	***tet;

	i = -1;
	if (!(tet = (char***)malloc(sizeof(char**) * NT)))
		return (NULL);
	while (++i < NT)
	{
		tet[i] = (char**)malloc(sizeof(char*) * 4);
		j = -1;
		while (++j < 4)
			tet[i][j] = (char*)malloc(sizeof(char) * 4);
	}
	tostruct(tet, buf, 0, r);
	return (tet);
}
