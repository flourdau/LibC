/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:38:54 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/20 15:27:12 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*tmp_dst;

	tmp_dst = dst;
	while ((n > 0) && *src)
	{
		*tmp_dst++ = *src++;
		n--;
	}
	while (n-- > 0)
		*tmp_dst++ = '\0';
	return (dst);
}
