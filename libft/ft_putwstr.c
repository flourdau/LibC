/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 16:49:07 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 16:46:46 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putwstr_width(wchar_t const *wstr, t_var *s)
{
	while (*wstr && (s->cnt_width < s->prec))
	{
		if (*wstr <= 0x7F)
		{
			s->cnt_width++;
			s->width--;
		}
		else if (*wstr <= 0x7FF)
		{
			s->cnt_width += 2;
			s->width -= 2;
		}
		else if (*wstr <= 0xFFFF)
		{
			s->cnt_width += 3;
			s->width -= 3;
		}
		else if (*wstr <= 0x10FFFF)
		{
			s->cnt_width += 4;
			s->width -= 4;
		}
		s->cnt_width++;
		wstr++;
	}
}

void	ft_putwstr_prec(wchar_t const *wstr, t_var *s)
{
	while (*wstr)
	{
		if (*wstr <= 0x7F && s->prec >= 1)
		{
			s->cnt += ft_putchar_ret(*wstr);
			s->prec -= 1;
		}
		else if (*wstr <= 0x7FF && s->prec >= 2)
		{
			ft_putwint(*wstr, s);
			s->prec -= 2;
		}
		else if (*wstr <= 0xFFFF && s->prec >= 3)
		{
			ft_putwint(*wstr, s);
			s->prec -= 3;
		}
		else if (*wstr <= 0x10FFFF && s->prec >= 4)
		{
			ft_putwint(*wstr, s);
			s->prec -= 4;
		}
		wstr++;
	}
}

void	ft_putwchar(const wchar_t wc, t_var *s)
{
	ft_putwint((wint_t)wc, s);
}

void	ft_putwstr(const wchar_t *wstr, t_var *s)
{
	while (*wstr)
		ft_putwint(*wstr++, s);
}
