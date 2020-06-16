/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:53:05 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/17 12:21:11 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr_endl_fd(size_t const i, int fd)
{
	ft_putnbr_fd(i, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putnbr_endl_fd(ssize_t const i, int fd)
{
	ft_putnbr_fd(i, fd);
	ft_putchar_fd('\n', fd);
}

void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
