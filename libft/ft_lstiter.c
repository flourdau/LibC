/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 10:03:29 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:52:20 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*list_ptr;

	list_ptr = lst;
	while (lst)
	{
		list_ptr = list_ptr->next;
		(*f)(lst);
		lst = list_ptr;
	}
}
