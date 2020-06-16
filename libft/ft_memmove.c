/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:23:09 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/27 13:20:57 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d_tmp;
	char	*s_tmp;

	d_tmp = dst;
	s_tmp = (char *)src;
	if (src != dst)
	{
		if (src > dst)
			while (len--)
				*d_tmp++ = *s_tmp++;
		else
		{
			d_tmp += len - 1;
			s_tmp += len - 1;
			while (len--)
				*d_tmp-- = *s_tmp--;
		}
	}
	return (dst);
}
