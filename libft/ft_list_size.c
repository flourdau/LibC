/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 17:11:24 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:51:34 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_list_size(t_list *begin_list)
{
	t_list	*list;
	size_t	i;

	list = begin_list;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
