/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tag_prec_width.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:56:56 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 22:18:42 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_precision_tag(va_list args, const char **format, t_var *s)
{
	s->flags |= PRECISION_TAG;
	(*format)++;
	if (**format == '*')
	{
		s->prec = va_arg(args, int);
		(*format)++;
		if (s->prec < 0)
			s->flags &= ~PRECISION_TAG;
	}
	else
		s->prec = ft_skip_atoi(format);
}

void	ft_check_digits_tag(va_list args, const char **format, t_var *s)
{
	s->flags |= WIDTH_TAG;
	if (**format == '*')
	{
		s->width = va_arg(args, int);
		(*format)++;
		if (s->width < 0)
		{
			s->width = -s->width;
			s->flags |= LEFT_TAG;
		}
	}
	else
		s->width = ft_skip_atoi(format);
}
