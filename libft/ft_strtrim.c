/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:42:59 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:53:47 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	while (ft_iswhitespace(s[i]))
		i++;
	len = ft_strlen(s + i);
	if (len > 0)
		while (ft_iswhitespace(s[i + len - 1]))
			len--;
	return (ft_strsub(s, i, len));
}
