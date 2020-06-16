/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typedef.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/08/22 18:31:32 by flourdau          #+#    #+#             */
/*   Updated: 2016/05/05 18:24:29 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPEDEF_H
# define TYPEDEF_H

/*
** ==> FT_PRINTF
*/
typedef struct		s_var
{
	size_t			cnt;
	size_t			bases;
	size_t			flags;
	ssize_t			width;
	int				cnt_width;
	ssize_t			prec;
	char			*tags;
	char			*str;
	char			*str_tmp;
	char			*arg_tmp;
	char			*prefixe;
	ssize_t			len_str;
	wchar_t			*wstr;
	wchar_t			wc;
	wint_t			wi;
	char			c;
	unsigned char	uc;
	ssize_t			ssi;
	size_t			si;
	unsigned int	ui;
	unsigned short	us;
}					t_var;

/*
** ==> FT_GNL
*/
typedef struct		s_get
{
	char			*stck;
	char			*tmp;
	char			*buf;
	char			*del;
	char			*pos_n;
	int				ret;
}					t_get;

/*
** ==> FT_LIST
*/
typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
** ==> MLX
*/
typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_img
{
	void			*img;
	int				bpp;
	int				size_line;
	int				endian;
	char			*data;
	int				height;
	int				width;
}					t_img;

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
	int				height;
	int				width;
}					t_mlx;

typedef struct		s_env
{
	t_mlx			mlx;
	t_img			img;
	t_point			*coord;
}					t_env;

typedef void(*t_one)(va_list args, const char **format, t_var *s);
typedef void(*t_two)(va_list args, const char **format, t_var *s);
typedef	struct tm	t_tm;
#endif
