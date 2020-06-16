/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:53:44 by flourdau          #+#    #+#             */
/*   Updated: 2016/05/05 17:02:17 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_pos_fd(size_t n, int fd)
{
	if (n >= 10)
	{
		ft_putnbr_pos_fd(n / 10, fd);
		ft_putnbr_pos_fd(n % 10, fd);
	}
	else
		ft_putchar_fd((n + 48), fd);
}

void	ft_putnbr_fd(ssize_t n, int fd)
{
	if (!(n ^ 0x8000000000000000))
		ft_putstr_fd("-9223372036854775808", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		ft_putnbr_pos_fd((size_t)n, fd);
	}
}
