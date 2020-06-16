/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:40:12 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:40:20 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((!s1) || (!s2) ||
		((ft_strlen(s1) > ft_strlen(s2)) && (n > ft_strlen(s2))))
		return (0);
	return (!ft_strncmp(s1, s2, n));
}
