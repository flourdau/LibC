/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 15:58:48 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/22 18:36:42 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wintlen(wint_t wi)
{
	size_t	i;

	i = 0;
	if (wi)
	{
		if (wi <= 0x7F)
			i += 1;
		else if (wi <= 0x7FF)
			i += 2;
		else if (wi <= 0xFFFF)
			i += 3;
		else if (wi <= 0x10FFFF)
			i += 4;
	}
	return (i);
}

int		ft_wstrlen(wchar_t *wstr)
{
	int	i;

	i = 0;
	while (*wstr)
	{
		if (*wstr <= 0x7F)
			i += 1;
		else if (*wstr <= 0x7FF)
			i += 2;
		else if (*wstr <= 0xFFFF)
			i += 3;
		else if (*wstr <= 0x10FFFF)
			i += 4;
		++wstr;
	}
	return (i);
}

int		ft_wclen(wchar_t wc)
{
	int	i;

	i = 0;
	if (wc <= 0x7F)
		i += 1;
	else if (wc <= 0x7FF)
		i += 2;
	else if (wc <= 0xFFFF)
		i += 3;
	else if (wc <= 0x10FFFF)
		i += 4;
	return (i);
}

ssize_t	ft_ssize_t_len(ssize_t n, int base)
{
	ssize_t	len;

	len = 0;
	if (base < 2)
		return (0);
	if (n == 0)
		return (1);
	else if (n < 0)
		n = -n;
	while (n > 0)
	{
		n /= base;
		len++;
	}
	return (len);
}

size_t	ft_size_t_len(size_t n, int base)
{
	size_t len;

	len = 0;
	if (n || base)
	{
		while (n > 0)
		{
			n /= base;
			len++;
		}
	}
	return (len);
}
