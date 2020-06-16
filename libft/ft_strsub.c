/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:42:16 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:42:22 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	s += start;
	if (!(str = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	str = ft_strncpy(str, s, len);
	str[len] = '\0';
	return (str);
}
