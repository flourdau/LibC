/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:19:15 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:38:54 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*mem;
	char	*explo;

	i = -1;
	mem = malloc(size);
	if (mem)
	{
		explo = (char *)mem;
		while (++i < size)
			*explo++ = 0;
	}
	return (mem);
}
