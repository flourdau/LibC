/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:42:28 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:42:30 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len_s2;

	len_s2 = ft_strlen(s2);
	while (ft_strncmp(s1, s2, len_s2))
	{
		if (!*s1)
			return (NULL);
		s1++;
	}
	if (!*s2)
		return ((char *)s1);
	return ((char *)s1);
}
