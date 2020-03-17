/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgarse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 10:17:59 by lgarse            #+#    #+#             */
/*   Updated: 2019/09/15 20:36:39 by lgarse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*nnext;
	t_list	*tnnext;

	if (!*alst)
		return ;
	nnext = *alst;
	while (nnext)
	{
		tnnext = nnext->next;
		del(nnext->content, nnext->content_size);
		free(nnext);
		nnext = tnnext;
	}
	*alst = NULL;
}
