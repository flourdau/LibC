/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 14:49:10 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/26 11:46:56 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwint(wint_t wint, t_var *s)
{
	if (wint <= 0x7F)
		s->cnt += ft_putchar_ret(wint);
	else if (wint <= 0x7FF)
	{
		s->cnt += ft_putchar_ret((wint >> 6) + 0xC0);
		s->cnt += ft_putchar_ret((wint & 0x3F) + 0x80);
	}
	else if (wint <= 0xFFFF)
	{
		s->cnt += ft_putchar_ret((wint >> 12) + 0xE0);
		s->cnt += ft_putchar_ret(((wint >> 6) & 0x3F) + 0x80);
		s->cnt += ft_putchar_ret((wint & 0x3F) + 0x80);
	}
	else if (wint <= 0x10FFFF)
	{
		s->cnt += ft_putchar_ret((wint >> 18) + 0xF0);
		s->cnt += ft_putchar_ret(((wint >> 12) & 0x3F) + 0x80);
		s->cnt += ft_putchar_ret(((wint >> 6) & 0x3F) + 0x80);
		s->cnt += ft_putchar_ret((wint & 0x3F) + 0x80);
	}
}
