/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 17:34:28 by flourdau          #+#    #+#             */
/*   Updated: 2015/08/19 21:11:25 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_line_loops(t_env *env, int color)
{
	while (XT <= X2 && X1 - X2 <= 0 && ft_abs(X1 - X2) >= ft_abs(Y1 - Y2))
	{
		pxl_2_img(&env->img, XT, Y1 + ((Y2 - Y1) * (XT - X1)) / (X2 - X1),
		color);
		XT++;
	}
	while (XT >= X2 && X1 - X2 >= 0 && ft_abs(X1 - X2) >= ft_abs(Y1 - Y2))
	{
		pxl_2_img(&env->img, XT, Y1 + ((Y2 - Y1) * (XT - X1)) / (X2 - X1),
		color);
		XT--;
	}
	while (YT <= Y2 && Y1 - Y2 <= 0 && ft_abs(X1 - X2) <= ft_abs(Y1 - Y2))
	{
		pxl_2_img(&env->img, X1 + ((X2 - X1) * (YT - Y1)) / (Y2 - Y1), YT,
		color);
		YT++;
	}
	while (YT >= Y2 && Y1 - Y2 >= 0 && ft_abs(X1 - X2) <= ft_abs(Y1 - Y2))
	{
		pxl_2_img(&env->img, X1 + ((X2 - X1) * (YT - Y1)) / (Y2 - Y1), YT,
		color);
		YT--;
	}
}

void		ft_line(t_env *env, int color)
{
	XT = X1;
	YT = Y1;
	if (X1 == X2 && Y1 == Y2)
		pxl_2_img(&env->img, X1, Y1, color);
	else
		ft_line_loops(env, color);
}
