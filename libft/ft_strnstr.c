/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:41:00 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:50:37 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	i = -1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!*s2)
		return ((char *)s1);
	if (len_s1 < n)
		n = len_s1;
	while ((++i + len_s2) < (n + 1))
	{
		if (ft_strncmp((char *)s1, (char *)s2, len_s2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
