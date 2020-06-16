/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/10 16:08:42 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 19:25:21 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_convert_bis(va_list args, t_var *s)
{
	if (s->flags >= H_TAG)
	{
		s->us = (unsigned short)va_arg(args, int);
		s->str_tmp = ft_n_str16(s);
	}
	else if (s->flags >= HH_TAG)
	{
		s->uc = (unsigned char)va_arg(args, int);
		s->str_tmp = ft_n_str8(s);
	}
	else
	{
		s->ui = (unsigned int)va_arg(args, int);
		s->str_tmp = ft_n_str32(s);
	}
}

void		ft_convert(va_list args, const char **format, t_var *s)
{
	if (**format == 'p')
	{
		s->flags |= SPECIAL_TAG;
		s->si = (size_t)va_arg(args, void*);
		s->str_tmp = ft_n_str64(s);
	}
	else if (s->flags >= L_TAG)
	{
		s->si = va_arg(args, size_t);
		s->str_tmp = ft_n_str64(s);
	}
	else
		ft_convert_bis(args, s);
	if (s->flags & MAJ_TAG)
		ft_striter(s->str_tmp, &ft_strupcase);
}
