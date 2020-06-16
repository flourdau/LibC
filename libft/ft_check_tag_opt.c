/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tag_opt.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/05 18:10:49 by flourdau          #+#    #+#             */
/*   Updated: 2016/05/05 18:10:52 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_special_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	s->flags |= SPECIAL_TAG;
	(*format)++;
}

void	ft_check_zeropad_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	if (!(LEFT))
		s->flags |= ZEROPAD_TAG;
	(*format)++;
}

void	ft_check_left_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	s->flags |= LEFT_TAG;
	(*format)++;
}

void	ft_check_plus_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	s->flags |= PLUS_TAG;
	if (SPACE)
		s->flags &= ~SPACE_TAG;
	(*format)++;
}

void	ft_check_space_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	if (!(PLUS))
		s->flags |= SPACE_TAG;
	(*format)++;
}
