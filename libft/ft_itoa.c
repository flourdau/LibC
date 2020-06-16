/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 10:03:59 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/28 09:40:01 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_write_itoa(char *newstr, int entier, size_t len)
{
	while (len > 0)
	{
		newstr[len-- - 1] = '0' - (entier % 10);
		entier /= 10;
	}
	return (newstr);
}

char			*ft_itoa(int n)
{
	size_t	len;
	char	*newstr;

	if (n == 0)
	{
		if (!(newstr = ft_strnew(1)))
			return (NULL);
		newstr[0] = '0';
		return (newstr);
	}
	len = ft_int_len(n, 10);
	if (n < 0)
	{
		if (!(newstr = ft_strnew(len + 1)))
			return (NULL);
		newstr[0] = '-';
		return ((ft_write_itoa(newstr + 1, n, len)) - 1);
	}
	else
	{
		if (!(newstr = ft_strnew(len)))
			return (NULL);
		return (ft_write_itoa(newstr, -n, len));
	}
	return (newstr);
}
