/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/15 11:41:47 by flourdau          #+#    #+#             */
/*   Updated: 2015/08/09 21:04:30 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_iword(char const *s, char c)
{
	int		nb_word;
	int		flag;

	nb_word = 0;
	flag = 1;
	while (*s)
	{
		if (*s != c)
		{
			if (flag == 1)
			{
				nb_word++;
				flag = 0;
			}
		}
		else if (flag == 0)
			flag = 1;
		s++;
	}
	return (nb_word);
}

static char		*ft_insert_word(char const *s, char c)
{
	char	*new_str;
	size_t	len_new_str;

	len_new_str = 0;
	while (s[len_new_str] != c)
		len_new_str++;
	if (!(new_str = (char *)malloc((len_new_str + 1) * sizeof(char))))
		return (NULL);
	new_str = ft_strncpy(new_str, s, len_new_str);
	new_str[len_new_str] = '\0';
	return (new_str);
}

static void		ft_cut_word(size_t n, char **lst, char const *s, char c)
{
	int		flag;

	flag = 1;
	while (*s && n > 0)
	{
		if (*s != c)
		{
			if (flag == 1)
			{
				*lst++ = ft_insert_word(s, c);
				n--;
				flag = 0;
			}
		}
		else if (flag == 0)
			flag = 1;
		s++;
	}
	*lst = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	nb_word;
	char	**lst_str;

	if (!s)
		return (NULL);
	nb_word = ft_iword(s, c);
	if (!(lst_str = (char **)malloc((nb_word + 1) * sizeof(char *))))
		return (NULL);
	ft_cut_word(nb_word, lst_str, s, c);
	return (lst_str);
}
