/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/02 14:54:45 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/28 10:13:25 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_elem;

	new_elem = (t_list *)malloc(sizeof(t_list));
	if (new_elem == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_elem->content = NULL;
		new_elem->content_size = 0;
	}
	else
	{
		new_elem->content = ft_strdup((char *)content);
		new_elem->content_size = content_size;
	}
	new_elem->next = NULL;
	return (new_elem);
}
