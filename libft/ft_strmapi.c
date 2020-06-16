/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:38:19 by flourdau          #+#    #+#             */
/*   Updated: 2015/07/19 13:48:57 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	i = -1;
	if ((!s) || (!f) ||
		(!(new_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1)))))
		return (NULL);
	while (s[++i])
		new_str[i] = f(i, s[i]);
	new_str[i] = '\0';
	return (new_str);
}
