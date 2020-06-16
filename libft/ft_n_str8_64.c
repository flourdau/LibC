/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_str8_64.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 15:48:04 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 15:53:52 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_n_str64(t_var *s)
{
	size_t len;

	if (!(s->si))
		len = 1;
	else
		len = ft_size_t_len(s->si, s->bases);
	s->str_tmp = ft_strnew(len);
	if (!(s->si))
		s->str_tmp[len - 1] = '0';
	while (s->si > 0)
	{
		if (s->si % s->bases <= 9)
			s->str_tmp[len - 1] = '0' + (s->si % s->bases);
		else
			s->str_tmp[len - 1] = 'a' + (s->si % s->bases) - 10;
		s->si /= s->bases;
		len--;
	}
	return (s->str_tmp);
}

char	*ft_n_str32(t_var *s)
{
	size_t len;

	if (!(s->ui))
		len = 1;
	else
		len = ft_size_t_len(s->ui, s->bases);
	s->str_tmp = ft_strnew(len);
	if (!(s->ui))
		s->str_tmp[len - 1] = '0';
	while (s->ui > 0)
	{
		if (s->ui % s->bases <= 9)
			s->str_tmp[len - 1] = '0' + (s->ui % s->bases);
		else
			s->str_tmp[len - 1] = 'a' + (s->ui % s->bases) - 10;
		s->ui /= s->bases;
		len--;
	}
	return (s->str_tmp);
}

char	*ft_n_str16(t_var *s)
{
	size_t len;

	if (!(s->us))
		len = 1;
	else
		len = ft_size_t_len(s->us, s->bases);
	s->str_tmp = ft_strnew(len);
	if (!(s->us))
		s->str_tmp[len - 1] = '0';
	while (s->us > 0)
	{
		if (s->us % s->bases <= 9)
			s->str_tmp[len - 1] = '0' + (s->us % s->bases);
		else
			s->str_tmp[len - 1] = 'a' + (s->us % s->bases) - 10;
		s->us /= s->bases;
		len--;
	}
	return (s->str_tmp);
}

char	*ft_n_str8(t_var *s)
{
	size_t len;

	if (!(s->uc))
		len = 1;
	else
		len = ft_size_t_len(s->uc, s->bases);
	s->str_tmp = ft_strnew(len);
	if (!(s->uc))
		s->str_tmp[len - 1] = '0';
	while (s->uc > 0)
	{
		if (s->uc % s->bases <= 9)
			s->str_tmp[len - 1] = '0' + (s->uc % s->bases);
		else
			s->str_tmp[len - 1] = 'a' + (s->uc % s->bases) - 10;
		s->uc /= s->bases;
		len--;
	}
	return (s->str_tmp);
}
