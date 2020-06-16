/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/19 21:19:41 by flourdau          #+#    #+#             */
/*   Updated: 2015/08/19 21:56:57 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_reset_screen(t_env *env)
{
	mlx_clear_window(env->mlx.mlx, env->mlx.win);
	env->img.img = mlx_new_image(env->mlx.mlx, env->img.width,
	env->img.height);
	env->img.data = mlx_get_data_addr(env->img.img, &(env->img.bpp),
	&(env->img.size_line), &(env->img.endian));
	mlx_put_image_to_window(env->mlx.mlx, env->mlx.win,
	env->img.img, 0, 0);
	draw_image(env);
}

void	pxl_2_img(t_img *img, int x, int y, int color)
{
	if ((x < img->width) && (x >= 0) && (y < img->height) && (y >= 0))
		ft_memcpy((img->data + (img->size_line * y) + ((img->bpp / 8) * x)),
		&color, img->bpp / 8);
}

void	draw_image(t_env *env)
{
	mlx_put_image_to_window(env->mlx.mlx, env->mlx.win, env->img.img, 0, 0);
}

int		expose_hook(t_env *env)
{
	draw_image(env);
	return (0);
}

void	ft_draw_border(t_env *env, int color1, int color2, int color3)
{
	int		x;
	int		y;
	int		color;
	int		i;

	i = 16;
	color = color1;
	y = 15;
	x = 15;
	while (i--)
	{
		while (y < WIN_HEIGHT - i)
			pxl_2_img(&env->img, x, y++, color);
		while (x < WIN_WIDTH - i)
			pxl_2_img(&env->img, x++, y, color);
		while (y > i)
			pxl_2_img(&env->img, x, y--, color);
		while (x > i)
			pxl_2_img(&env->img, x--, y, color);
		if (i < 10)
			color = color2;
		if (i < 5)
			color = color3;
	}
	draw_image(env);
}
