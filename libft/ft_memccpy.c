/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 12:09:07 by lgarse            #+#    #+#             */
/*   Updated: 2019/09/16 17:17:03 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *dst, const void *src,\
					int c, size_t n)
{
	unsigned char	*gd;

	gd = (unsigned char*)dst;
	while (n-- != 0)
	{
		*gd = *(unsigned char*)src;
		if (*gd == (unsigned char)c)
			return ((void*)gd + 1);
		gd++;
		src++;
	}
	return (NULL);
}
