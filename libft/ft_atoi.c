/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 10:02:22 by flourdau          #+#    #+#             */
/*   Updated: 2015/06/17 13:23:45 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_skip_atoi(const char **s)
{
	size_t		i;

	i = 0;
	while (ft_isdigit(**s))
		i = i * 10 + *((*s)++) - '0';
	return (i);
}

int		ft_atoi(const char *str)
{
	int		entier;
	int		neg;

	neg = 1;
	while (ft_isspace(*str))
		str++;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	entier = 0;
	while (ft_isdigit(*str))
		entier = (entier * 10) + (*str++ - '0');
	return (entier * neg);
}
