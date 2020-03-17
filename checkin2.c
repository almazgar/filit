/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkin2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 09:13:37 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/09 21:41:08 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int		checkin2(char *buf)
{
	int	dot;
	int	diez;
	int	kn;
	int	i;

	i = 0;
	dot = 0;
	diez = 0;
	kn = 0;
	while (i < 21)
	{
		if (buf[i] == '.')
			dot++;
		if (buf[i] == '#')
			diez++;
		if (buf[i] == '\n')
			kn++;
		i++;
	}
	if (buf[20] == '\0')
		kn++;
	if (dot == 12 && diez == 4 && kn == 5)
		return (1);
	else
		return (0);
}
