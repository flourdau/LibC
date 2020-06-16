/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:29:02 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:29:12 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dst_tmp;

	dst_tmp = dst;
	while (*src)
		*dst_tmp++ = *src++;
	*dst_tmp = '\0';
	return (dst);
}
