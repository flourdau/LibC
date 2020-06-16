/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 14:25:26 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 17:23:33 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*nextlist;

	if (alst && *alst && *del)
	{
		lst = *alst;
		nextlist = (*alst)->next;
		ft_lstdelone(&lst, del);
		if (nextlist)
			ft_lstdel(&nextlist, del);
		*alst = NULL;
	}
}
