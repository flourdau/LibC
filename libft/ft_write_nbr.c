/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 16:19:16 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 16:22:57 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_write_nbr(t_var *s)
{
	if (s->flags >= L_TAG)
		ft_putnbr_size_t_pos(s->ssi, s);
	else if (s->flags >= H_TAG)
		ft_putnbr_short_pos((unsigned short)s->ssi, s);
	else if (s->flags >= HH_TAG)
		ft_putnbr_char_pos((unsigned char)s->ssi, s);
	else
		ft_putnbr_int_pos((unsigned int)s->ssi, s);
}
