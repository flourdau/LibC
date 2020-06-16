/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:47:36 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/27 10:46:34 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putchar_ret(char c)
{
	return (write(1, &c, 1));
}

void	ft_putchar(char c)
{
	ft_putchar_fd(c, 1);
}
