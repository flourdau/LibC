/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_types.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/26 12:09:35 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/28 08:05:00 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_entier_type(const char **format, t_var *s)
{
	if (PRECISION && ZEROPAD)
		s->flags &= ~ZEROPAD_TAG;
	if (PLUS || SPACE || NEG)
		s->width--;
	if (WIDTH && !(LEFT))
		ft_write_width(format, s);
	if (SPACE && !(NEG) && **format != 'u' && **format != 'U' &&
		(!(WIDTH) || !(ZEROPAD)))
		s->cnt += ft_putchar_ret(' ');
	if (PLUS && !(NEG) && !(ZEROPAD) && **format != 'u' && **format != 'U')
		s->cnt += ft_putchar_ret('+');
	if (NEG && (!(WIDTH) || !(ZEROPAD)))
		s->cnt += ft_putchar_ret('-');
	if (PRECISION)
		ft_write_precision(s);
	if (!(s->prec == 0 && s->ssi == 0))
		ft_write_nbr(s);
	if (WIDTH && LEFT)
		ft_write_width(format, s);
}

void	ft_write_convert_type(const char **format, t_var *s)
{
	if (!(ZEROPAD) && WIDTH && !(LEFT))
		ft_write_width(format, s);
	s->cnt += ft_putstr_ret(s->prefixe);
	if (ZEROPAD)
		ft_write_width(format, s);
	if (PRECISION)
		ft_write_precision(s);
	if (!(s->prec == 0))
		s->cnt += ft_putstr_ret(s->str_tmp);
	if (WIDTH && LEFT)
		ft_write_width(format, s);
	free(s->str_tmp);
}

void	ft_write_wstr_type(const char **format, t_var *s)
{
	if (ZEROPAD || (WIDTH && !(LEFT)))
		ft_write_width(format, s);
	if (**format == 'C' || L)
		ft_putwint(s->wc, s);
	else
		ft_putwchar(s->c, s);
	if (WIDTH && LEFT)
		ft_write_width(format, s);
}

void	ft_write_s_str_type(const char **format, t_var *s)
{
	if (ZEROPAD || (WIDTH && !(LEFT)))
	{
		ft_putwstr_width(s->wstr, s);
		ft_write_width(format, s);
	}
	if (PRECISION)
		ft_putwstr_prec(s->wstr, s);
	else
		ft_putwstr(s->wstr, s);
}

void	ft_write_str_type(const char **format, t_var *s)
{
	if ((ZEROPAD || (WIDTH && !(LEFT))) &&
		(**format != 'S' || (**format != 's' && L)))
		ft_write_width(format, s);
	if (**format == 's' && !(L))
	{
		if (PRECISION && s->len_str > s->prec)
			s->cnt += ft_putstr_ret_prec(s->str, s->prec);
		else if (PRECISION)
			s->cnt += ft_putstr_ret_prec(s->str, s->len_str);
		else
			s->cnt += ft_putstr_ret(s->str);
	}
	else if (**format == 'S' || (**format == 's' && L))
		ft_write_s_str_type(format, s);
	else
		s->cnt += ft_putchar_ret(s->c);
	if (WIDTH && LEFT)
		ft_write_width(format, s);
}
