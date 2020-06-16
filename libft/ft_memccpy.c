/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:18:33 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:41:09 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dsttemp;
	unsigned char	*srctemp;
	size_t			i;

	dsttemp = (unsigned char *)dst;
	srctemp = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		dsttemp[i] = srctemp[i];
		if (dsttemp[i] == (unsigned char)c)
			return (dst + i + 1);
	}
	return (NULL);
}
