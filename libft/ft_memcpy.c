/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:21:04 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/13 20:20:58 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_tmp;
	char	*src_tmp;
	size_t	i;

	dst_tmp = (char *)dst;
	src_tmp = (char *)src;
	i = -1;
	while (++i < n)
		dst_tmp[i] = src_tmp[i];
	return (dst);
}
