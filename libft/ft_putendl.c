/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 12:06:04 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/17 12:27:14 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_endl(size_t const i)
{
	ft_putnbr(i);
	ft_putchar('\n');
}

void	ft_putnbr_endl(ssize_t const i)
{
	ft_putnbr(i);
	ft_putchar('\n');
}

void	ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}
