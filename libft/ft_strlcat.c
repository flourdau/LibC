/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:34:34 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:47:20 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	i = -1;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if ((size - 1 <= lendst) || (size == '\0'))
		return (size + lensrc);
	while (lendst + ++i < size - 1)
		dst[lendst + i] = src[i];
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
