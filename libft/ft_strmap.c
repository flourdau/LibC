/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:36:35 by flourdau          #+#    #+#             */
/*   Updated: 2015/04/15 11:36:37 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	char	*new_str_tmp;

	if ((!s) || (!f) ||
		(!(new_str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1)))))
		return (NULL);
	new_str_tmp = new_str;
	while (*s)
		*new_str_tmp++ = f(*s++);
	*new_str_tmp = '\0';
	return (new_str);
}
