/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:50:06 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 20:22:51 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_wchar_type(va_list args, const char **format, t_var *s)
{
	if (**format == 'C' || L)
	{
		s->wc = (wchar_t)va_arg(args, wint_t);
		s->len_str = ft_wintlen(s->wc);
	}
	else
	{
		s->c = (char)va_arg(args, int);
		s->len_str = ft_wclen(s->c);
		if (PRECISION)
			s->flags &= ~PRECISION_TAG;
	}
	ft_write_wstr_type(format, s);
}

void	ft_check_char_type(va_list args, const char **format, t_var *s)
{
	if (**format == 's' && !(L))
	{
		s->str = va_arg(args, char *);
		s->len_str = ft_strlen(s->str);
		if (!s->str)
		{
			s->str = "(null)";
			s->len_str = 6;
		}
	}
	else if (**format == 'S' || (**format == 's' && L))
	{
		s->wstr = va_arg(args, wchar_t *);
		if (!s->wstr)
			s->wstr = L"(null)";
		s->len_str = ft_wstrlen(s->wstr);
	}
	ft_write_str_type(format, s);
}
