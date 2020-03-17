/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 13:19:36 by lgarse            #+#    #+#             */
/*   Updated: 2019/10/20 16:00:08 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H
# define BUFF_SIZE 600
# define IFX (x1 + x - pl.x)
# define IFY (y1 + y - pl.y)
# define NT ((r + 1) / 21)

# include "fcntl.h"
# include "sys/types.h"
# include "sys/uio.h"
# include "unistd.h"
# include "stdlib.h"
# include "libft/libft.h"

typedef struct	s_tet
{
	int			x;
	int			y;
	int			s;
}				t_tet;

char			**blanc(int size);
void			brute_force(char ***tet, char **map, int index, int r);
int				check_put(char **sq, char **map, int x1, int y1);
int				checkin1(char *buf);
int				checkin2(char *buf);
int				checkin3(char *buf, int r);
char			**clear_tet(char **map, int tet, int size);
int				dimens(char **map);
int				ft_read(int fd, char *buf);
int				ft_sqrt(int nbr);
int				ft_tet_char(char **sq);
int				ft_x(char **sq);
int				ft_y(char **sq);
void			print_sq(char **sq, int size, char ***tet, int r);
void			tostruct(char ***tet, char *buf, int index, int r);
char			***tostruct2(char *buf, int r);
void			sq_free(char **sq, int size);
void			tet_free(char ***tet, int r);
void			organ(char *buf, int r, int size);

#endif
