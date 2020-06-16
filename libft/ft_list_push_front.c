/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 16:55:49 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:50:46 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_front(t_list **begin_list, void *content)
{
	t_list	*list;

	if (*begin_list)
	{
		list = ft_create_elem(content);
		list->next = *begin_list;
		*begin_list = list;
	}
	else
		*begin_list = ft_create_elem(content);
}
