/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkin1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:13:28 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/29 16:22:16 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		checkin1(char *buf)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 20)
	{
		if (buf[i] == '#')
		{
			(i - 1 >= 0 && buf[i - 1] == '#') ? j++ : j;
			(i + 1 < 20 && buf[i + 1] == '#') ? j++ : j;
			(i + 5 < 20 && buf[i + 5] == '#') ? j++ : j;
			(i - 5 >= 0 && buf[i - 5] == '#') ? j++ : j;
		}
		i++;
	}
	if (j == 6 || j == 8)
		return (1);
	else
		return (0);
}
