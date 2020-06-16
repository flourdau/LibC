/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type_convert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:49:57 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 19:53:42 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_b_type(va_list args, const char **format, t_var *s)
{
	if (**format == 'b' && SPECIAL)
	{
		s->prefixe = "0b";
		s->width -= 2;
	}
	if (**format == 'B' && SPECIAL)
	{
		s->prefixe = "0B";
		s->width -= 2;
	}
	if (**format == 'B')
		s->flags |= MAJ_TAG;
	ft_check_arg_convert_type(args, format, s);
}

void	ft_check_o_type(va_list args, const char **format, t_var *s)
{
	s->bases = 8;
	if (**format == 'O')
	{
		s->flags |= MAJ_TAG;
		s->flags |= L_TAG;
	}
	if (SPECIAL)
	{
		s->prefixe = "0";
		s->width--;
		s->prec--;
	}
	ft_check_arg_convert_type(args, format, s);
}

void	ft_check_xp_type(va_list args, const char **format, t_var *s)
{
	s->bases = 16;
	if (**format == 'X')
	{
		s->flags |= MAJ_TAG;
		if (SPECIAL)
		{
			s->prefixe = "0X";
			s->width -= 2;
		}
	}
	if ((SPECIAL && **format == 'x') || **format == 'p')
	{
		s->prefixe = "0x";
		s->width -= 2;
	}
	ft_check_arg_convert_type(args, format, s);
}

void	ft_check_arg_convert_type(va_list args, const char **format, t_var *s)
{
	ft_convert(args, format, s);
	if (SPECIAL && s->prec == 0 && (**format == 'o' || **format == 'O'))
	{
		s->flags &= ~PRECISION_TAG;
		s->prec = -1;
	}
	if (!(s->prec == 0))
		s->len_str += ft_strlen(s->str_tmp);
	if (ft_strequ(s->str_tmp, "0") && **format != 'p')
		s->prefixe = NULL;
	ft_write_convert_type(format, s);
}
