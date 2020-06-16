/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:20:19 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:20:29 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp_s;
	unsigned char	tmp_c;

	if (!s)
		return (NULL);
	tmp_s = (unsigned char *)s;
	tmp_c = (unsigned char)c;
	while (n > 0)
	{
		if (*tmp_s == tmp_c)
			return ((void *)tmp_s);
		tmp_s++;
		n--;
	}
	return (NULL);
}
