/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_xsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/27 16:48:43 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 16:50:34 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_size_t_pos(size_t n, t_var *s)
{
	if (n >= 10)
	{
		ft_putnbr_size_t_pos(n / 10, s);
		ft_putnbr_size_t_pos(n % 10, s);
	}
	else
		s->cnt += ft_putchar_ret(n + 48);
}

void	ft_putnbr_ssize_t(ssize_t n, t_var *s)
{
	if (!(n ^ 0x8000000000000000))
		s->cnt += ft_putstr_ret("9223372036854775808");
	else
	{
		if (n < 0)
			n = -n;
		ft_putnbr_size_t_pos((size_t)n, s);
	}
}

void	ft_putnbr_short_pos(unsigned short n, t_var *s)
{
	if (n >= 10)
	{
		ft_putnbr_short_pos(n / 10, s);
		ft_putnbr_short_pos(n % 10, s);
	}
	else
		s->cnt += ft_putchar_ret(n + 48);
}

void	ft_putnbr_char_pos(unsigned char n, t_var *s)
{
	if (n >= 10)
	{
		ft_putnbr_char_pos(n / 10, s);
		ft_putnbr_char_pos(n % 10, s);
	}
	else
		s->cnt += ft_putchar_ret(n + 48);
}

void	ft_putnbr_int_pos(unsigned int n, t_var *s)
{
	if (n >= 10)
	{
		ft_putnbr_int_pos(n / 10, s);
		ft_putnbr_int_pos(n % 10, s);
	}
	else
		s->cnt += ft_putchar_ret(n + 48);
}
