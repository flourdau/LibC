/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/06 11:43:53 by flourdau          #+#    #+#             */
/*   Updated: 2015/10/27 09:46:41 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *content)
{
	t_list	*list;

	list = NULL;
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (list)
	{
		list->content = content;
		list->content_size = 0;
		list->next = NULL;
	}
	return (list);
}
