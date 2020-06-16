/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 09:21:07 by flourdau          #+#    #+#             */
/*   Updated: 2015/09/14 15:33:21 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_init_var(t_var *s)
{
	s->bases = INIT_TAG + 2;
	s->flags = INIT_TAG;
	s->width = INIT_TAG;
	s->cnt_width = INIT_TAG;
	s->prec = INIT_TAG - 1;
	s->tags = NULL;
	s->str = NULL;
	s->str_tmp = NULL;
	s->arg_tmp = NULL;
	s->prefixe = NULL;
	s->len_str = INIT_TAG;
	s->wstr = L"(null)";
	s->wc = INIT_TAG;
	s->wi = INIT_TAG;
	s->c = INIT_TAG;
	s->uc = INIT_TAG;
	s->ssi = INIT_TAG;
	s->si = INIT_TAG;
	s->ui = INIT_TAG;
	s->us = INIT_TAG;
}

static void		ft_check_types(va_list args, const char **format, t_var *s)
{
	t_two			tmp;
	static t_two	lst_funcs_type[] = {
	ft_check_b_type, ft_check_b_type, ft_check_wchar_type,
	ft_check_wchar_type, ft_check_entier_type, ft_check_entier_type,
	ft_check_entier_type, ft_check_char_type, ft_check_char_type,
	ft_check_o_type, ft_check_o_type, ft_check_xp_type,
	ft_check_entier_type, ft_check_entier_type, ft_check_xp_type,
	ft_check_xp_type};

	s->tags = "bBcCidDsSoOpuUxX";
	s->arg_tmp = ft_strchr(s->tags, **format);
	if (s->arg_tmp && *(s->arg_tmp))
	{
		tmp = lst_funcs_type[s->arg_tmp - s->tags];
		tmp(args, format, s);
		(*format)++;
	}
	else if (**format)
	{
		s->c = **format;
		s->len_str = 1;
		ft_write_str_type(format, s);
		(*format)++;
	}
}

static void		ft_check_args(va_list args, const char **format, t_var *s)
{
	t_one			tmp;
	static t_one	lst_funcs_tag[] = {
	ft_check_special_tag, ft_check_zeropad_tag, ft_check_left_tag,
	ft_check_plus_tag, ft_check_space_tag, ft_check_precision_tag,
	ft_check_digits_tag, ft_check_digits_tag, ft_check_digits_tag,
	ft_check_digits_tag, ft_check_digits_tag, ft_check_digits_tag,
	ft_check_digits_tag, ft_check_digits_tag, ft_check_digits_tag,
	ft_check_digits_tag, ft_check_z_tag, ft_check_j_tag,
	ft_check_l_tag, ft_check_h_tag};

	s->tags = "#0-+ .*123456789zjlh";
	(*format)++;
	s->arg_tmp = ft_strchr(s->tags, **format);
	while (s->arg_tmp && *(s->arg_tmp))
	{
		tmp = lst_funcs_tag[s->arg_tmp - s->tags];
		tmp(args, format, s);
		s->arg_tmp = ft_strchr(s->tags, **format);
	}
}

static void		ft_loops_format(va_list args, const char *format, t_var *s)
{
	while (*format)
	{
		if (*format == '%')
		{
			ft_init_var(s);
			ft_check_args(args, &format, s);
			ft_check_types(args, &format, s);
		}
		else
			s->cnt += ft_putchar_ret(*format++);
	}
}

int				ft_printf(const char *format, ...)
{
	va_list	args;
	t_var	s;

	s.cnt = INIT_TAG;
	va_start(args, format);
	ft_loops_format(args, format, &s);
	va_end(args);
	return (s.cnt);
}
