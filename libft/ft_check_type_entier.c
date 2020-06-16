/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_type_entier.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:50:16 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/26 18:09:30 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_entier_type(va_list args, const char **format, t_var *s)
{
	if (**format == 'D' || **format == 'U')
		s->flags |= L_TAG;
	if (s->flags >= L_TAG)
		s->ssi = va_arg(args, ssize_t);
	else if (s->flags >= H_TAG)
		s->ssi = (short)va_arg(args, int);
	else if (s->flags >= HH_TAG)
		s->ssi = (char)va_arg(args, int);
	else
		s->ssi = va_arg(args, int);
	if (s->ssi < 0 && **format != 'u' && **format != 'U')
	{
		s->ssi = -(s->ssi);
		s->flags |= NEG_TAG;
	}
	ft_check_next_entier(format, s);
}

void	ft_check_next_entier(const char **format, t_var *s)
{
	if (!(s->prec == 0 && s->ssi == 0))
	{
		if (s->flags >= L_TAG)
			s->len_str += (ft_ssize_t_len(s->ssi, 10));
		else if (s->flags >= H_TAG)
			s->len_str += (ft_ssize_t_len((unsigned short)s->ssi, 10));
		else if (s->flags >= HH_TAG)
			s->len_str += (ft_ssize_t_len((unsigned char)s->ssi, 10));
		else
			s->len_str += (ft_ssize_t_len((unsigned int)s->ssi, 10));
	}
	ft_write_entier_type(format, s);
}
