/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 12:19:53 by flourdau          #+#    #+#             */
/*   Updated: 2015/03/20 11:01:56 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char	*tmp_s1;

	tmp_s1 = s1;
	while (*tmp_s1)
		tmp_s1++;
	while (*s2)
		*tmp_s1++ = *s2++;
	*tmp_s1 = '\0';
	return (s1);
}
