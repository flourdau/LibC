/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 12:54:56 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:51:24 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp;
	t_list	*tmp2;

	tmp = NULL;
	list = *begin_list;
	if (list || (list->next))
	{
		tmp = list->next;
		tmp2 = tmp->next;
		list->next = NULL;
		tmp->next = list;
		while (tmp2)
		{
			list = tmp;
			tmp = tmp2;
			tmp2 = tmp2->next;
			tmp->next = list;
		}
		*begin_list = tmp;
	}
}
