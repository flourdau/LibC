/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:40:43 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:51:49 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*f;

	i = -1;
	f = NULL;
	while (s[++i])
		if (s[i] == c)
			f = (char *)(s + i);
	if (s[i] == c)
		f = (char *)(s + i);
	return (f);
}
