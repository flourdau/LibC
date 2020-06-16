/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:29:54 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:30:08 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str2;
	char	*str2_tmp;

	if ((!s1) || (!(str2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1)))))
		return (NULL);
	str2_tmp = str2;
	while (*s1)
		*str2_tmp++ = *s1++;
	*str2_tmp = '\0';
	return (str2);
}
