/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_width_write.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 17:41:40 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/28 11:17:25 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_width(const char **format, t_var *s)
{
	if (**format != 's' && **format != 'S' &&
		**format != 'c' && **format != 'C')
		s->width -= ((s->prec > s->len_str) ? s->prec : s->len_str);
	else if (PRECISION)
	{
		if (**format == 'S' || (**format == 's' && L))
		{
			if (ZEROPAD)
				while (s->width-- > 0)
					s->cnt += ft_putchar_ret('0');
			else
				while (s->width-- > 0)
					s->cnt += ft_putchar_ret(' ');
		}
		s->width -= ((s->prec > s->len_str) ? s->len_str : s->prec);
	}
	else
		s->width -= s->len_str;
}

void	ft_write_width(const char **format, t_var *s)
{
	ft_check_width(format, s);
	if (ZEROPAD && !(LEFT))
	{
		if (SPACE && !(NEG) && **format != '%' && **format != 'u' &&
			**format != 'U')
			s->cnt += ft_putchar_ret(' ');
		if (NEG)
			s->cnt += ft_putchar_ret('-');
		if (PLUS && !(NEG))
			s->cnt += ft_putchar_ret('+');
		while (s->width-- > 0)
			s->cnt += ft_putchar_ret('0');
	}
	else
		while (s->width-- > 0)
			s->cnt += ft_putchar_ret(' ');
}

void	ft_write_precision(t_var *s)
{
	int i;

	i = 0;
	while (i++ < s->prec - s->len_str)
		s->cnt += ft_putchar_ret('0');
}
