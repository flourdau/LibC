/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_time.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/02 09:54:32 by flourdau          #+#    #+#             */
/*   Updated: 2016/05/05 18:27:00 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_is_mon(int mon)
{
	const char	is_mon[][4] = {
		"jan", "fev", "mar",
		"avr", "mai", "jui", "jul", "aou", "sep", "oct", "nov", "dec"};

	return ((char*)ft_strdup(is_mon[mon]));
}

char	*ft_is_day(int day)
{
	const char	is_day[][4] = {
		"lun", "mar", "mer", "jeu", "ven", "sam", "dim"};

	return ((char*)ft_strdup(is_day[day]));
}

t_tm	*ft_localtime(const time_t *timep)
{
	t_tm	*ft_time_tmp;

	ft_time_tmp = localtime(timep);
	return (ft_time_tmp);
}
