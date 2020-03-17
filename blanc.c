/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blanc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:28:29 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/14 10:06:32 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char		**blanc(int size)
{
	int		i;
	int		j;
	char	**map;

	if (!(map = (char**)malloc(sizeof(char*) * size + 1)))
		return (NULL);
	i = -1;
	while (++i < size)
	{
		if (!(map[i] = (char *)malloc(sizeof(char) * size + 1)))
			return (NULL);
		j = -1;
		while (++j < size)
			map[i][j] = '.';
		map[i][j] = '\0';
	}
	map[i] = 0;
	return (map);
}
