/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_tag_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/18 11:54:13 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/23 20:51:31 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check_z_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	if ((Z_TAG) > s->flags)
		s->flags |= Z_TAG;
	(*format)++;
}

void	ft_check_j_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	if ((J_TAG) > s->flags)
		s->flags |= J_TAG;
	(*format)++;
}

void	ft_check_l_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	(*format)++;
	if (**format == 'l')
	{
		(*format)++;
		if ((LL_TAG) > s->flags)
			s->flags |= LL_TAG;
	}
	else if ((L_TAG) > s->flags)
		s->flags |= L_TAG;
}

void	ft_check_h_tag(va_list args, const char **format, t_var *s)
{
	(void)args;
	(*format)++;
	if (**format == 'h')
	{
		(*format)++;
		if ((HH_TAG) > s->flags)
			s->flags |= HH_TAG;
	}
	else if ((H_TAG) > s->flags)
		s->flags |= H_TAG;
}
