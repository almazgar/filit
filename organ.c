/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   organ.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 15:46:52 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 16:35:58 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		organ(char *buf, int r, int size)
{
	char	***temp3;
	char	**temp2;

	temp3 = tostruct2(buf, r);
	free(buf);
	while (++size < 30)
	{
		temp2 = blanc(size);
		brute_force(temp3, temp2, 0, r);
		sq_free(temp2, size);
	}
	tet_free(temp3, r);
}
