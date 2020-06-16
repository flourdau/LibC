/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 12:52:50 by flourdau          #+#    #+#             */
/*   Updated: 2016/01/13 12:54:40 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_int(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_swap_str(char **str1, char **str2)
{
	char	*tmp;

	tmp = NULL;
	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}
