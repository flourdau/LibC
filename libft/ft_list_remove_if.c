/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/09 10:40:30 by flourdau          #+#    #+#             */
/*   Updated: 2015/03/27 14:52:59 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	if (*begin_list)
	{
		if (!((*cmp)((*begin_list)->content, data_ref)))
		{
			list_ptr = *begin_list;
			*begin_list = (*begin_list)->next;
			free(list_ptr);
			ft_list_remove_if(begin_list, data_ref, cmp);
		}
		else
			ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
	}
}
