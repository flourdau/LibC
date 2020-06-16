/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:48:51 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/27 16:51:03 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pos(size_t n)
{
	if (n >= 10)
	{
		ft_putnbr_pos(n / 10);
		ft_putnbr_pos(n % 10);
	}
	else
		ft_putchar(n + 48);
}

void	ft_putnbr(ssize_t n)
{
	if (!(n ^ 0x8000000000000000))
		ft_putstr("-9223372036854775808");
	else
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = (size_t)-n;
		}
		ft_putnbr_pos(n);
	}
}
