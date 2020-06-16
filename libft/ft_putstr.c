/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:50:04 by flourdau          #+#    #+#             */
/*   Updated: 2015/05/24 21:47:43 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_ret_prec(char const *s, ssize_t prec)
{
	return (write(1, s, prec));
}

size_t	ft_putstr_ret(char const *s)
{
	return (write(1, s, ft_strlen(s)));
}

void	ft_putstr(char const *s)
{
	write(1, s, ft_strlen(s));
}
