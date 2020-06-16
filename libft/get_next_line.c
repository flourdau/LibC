/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/14 11:45:06 by flourdau          #+#    #+#             */
/*   Updated: 2015/01/10 14:53:04 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	assign_line(char **line, t_get *e)
{
	if (e->ret < 0)
		return (-1);
	ft_strdel(&(e->buf));
	if ((e->ret == 0) && (ft_strlen(e->stck) == 0))
	{
		*line = NULL;
		ft_strdel(&(e->stck));
		return (0);
	}
	*line = e->stck;
	e->tmp = e->stck;
	if (e->ret == 0)
		e->stck = ft_strdup("\0");
	else
	{
		*(e->pos_n) = '\0';
		e->stck = ft_strdup(e->pos_n + 1);
	}
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static t_get		e;

	ft_strdel(&(e.tmp));
	if ((fd < 0) || (!line))
		return (-1);
	if (!(e.buf = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	while (!(e.pos_n = ft_strchr(e.stck, '\n')))
	{
		if ((e.ret = read(fd, e.buf, BUFF_SIZE)) < 1)
			return (assign_line(line, &e));
		e.buf[e.ret] = '\0';
		e.del = e.stck;
		e.stck = ft_strjoin(e.stck, e.buf);
		ft_strdel(&e.del);
	}
	e.ret = 1;
	return (assign_line(line, &e));
}
