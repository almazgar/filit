/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dimens.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:09:24 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/11 17:35:27 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		dimens(char **sq)
{
	int	i;

	i = 0;
	while (sq[0][i])
		i++;
	return (i);
}
