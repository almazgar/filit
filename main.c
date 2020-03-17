/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:10:39 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 16:36:13 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			main(int argc, char **argv)
{
	int		r;
	char	*buf;
	int		fd;
	int		size;

	if (argc != 2)
	{
		ft_putendl("usage ./fillit [input_file]");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0 || (!(buf = (char*)malloc(sizeof(char) * 600))))
		return (0);
	r = ft_read(fd, buf);
	if (r < 20)
	{
		free(buf);
		return (0);
	}
	size = ft_sqrt(NT) - 1;
	organ(buf, r, size);
	return (1);
}
