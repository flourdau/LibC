/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/08 10:52:55 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:51:01 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_push_params(int argc, char **argv)
{
	t_list	*list;
	int		i;

	i = 2;
	if (argc == 1)
		return (NULL);
	list = ft_create_elem(argv[1]);
	while (i < argc)
	{
		ft_list_push_front(&list, argv[i]);
		i++;
	}
	return (list);
}
