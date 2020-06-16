/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flourdau <flourdau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 12:21:21 by flourdau          #+#    #+#             */
/*   Updated: 2016/05/05 18:21:32 by flourdau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "includesft.h"

/*
** ==>	FT_CONVERT
*/
int		ft_atoi(const char *str);
char	*ft_itoa(int n);
size_t	ft_skip_atoi(const char **s);
void	ft_strlowcase(char *str);
void	ft_strupcase(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

/*
** ==>	FT_COUNTER
*/
size_t	ft_size_t_len(size_t n, int base);
size_t	ft_int_len(int n, int base);
ssize_t	ft_ssize_t_len(ssize_t n, int base);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t maxlen);
int		ft_wstrlen(wchar_t *wstr);
int		ft_wclen(wchar_t wc);
size_t	ft_wintlen(wint_t wi);

/*
** ==>	FT_PRINTF
*/
int		ft_printf(const char *format, ...);
void	ft_convert(va_list args, const char **format, t_var *s);
char	*ft_n_str8(t_var *s);
char	*ft_n_str16(t_var *s);
char	*ft_n_str32(t_var *s);
char	*ft_n_str64(t_var *s);
void	ft_check_special_tag(va_list args, const char **format, t_var *s);
void	ft_check_zeropad_tag(va_list args, const char **format, t_var *s);
void	ft_check_left_tag(va_list args, const char **format, t_var *s);
void	ft_check_plus_tag(va_list args, const char **format, t_var *s);
void	ft_check_space_tag(va_list args, const char **format, t_var *s);
void	ft_check_precision_tag(va_list args, const char **format, t_var *s);
void	ft_check_digits_tag(va_list args, const char **format, t_var *s);
void	ft_check_tag(va_list args, const char **format, t_var *s);
void	ft_check_h_tag(va_list args, const char **format, t_var *s);
void	ft_check_l_tag(va_list args, const char **format, t_var *s);
void	ft_check_j_tag(va_list args, const char **format, t_var *s);
void	ft_check_z_tag(va_list args, const char **format, t_var *s);
void	ft_check_entier_type(va_list args, const char **format, t_var *s);
void	ft_check_next_entier(const char **format, t_var *s);
void	ft_check_char_type(va_list args, const char **format, t_var *s);
void	ft_check_wchar_type(va_list args, const char **format, t_var *s);
void	ft_check_arg_convert_type(va_list args, const char **format, t_var *s);
void	ft_check_b_type(va_list args, const char **format, t_var *s);
void	ft_check_o_type(va_list args, const char **format, t_var *s);
void	ft_check_xp_type(va_list args, const char **format, t_var *s);
void	ft_write_entier_type(const char **format, t_var *s);
void	ft_write_nbr(t_var *s);
void	ft_write_convert_type(const char **format, t_var *s);
void	ft_write_precision(t_var *s);
void	ft_write_width(const char **format, t_var *s);
void	ft_check_width(const char **format, t_var *s);
void	ft_write_str_type(const char **format, t_var *s);
void	ft_write_wstr_type(const char **format, t_var *s);
void	ft_write_s_str_type(const char **format, t_var *s);

/*
** ==>	FT_GNL
*/
int		get_next_line(int const fd, char **line);

/*
** ==>	FT_IS
*/
int		ft_isspace(int c);
int		ft_iswhitespace(char c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_islower(int c);
int		ft_isupper(int c);
int		ft_ispunct(int c);
int		ft_isblank(int c);
int		ft_iscntrl(int c);
int		ft_isgraph(int c);
int		ft_isxdigit(int c);

/*
** ==>	FT_LST
*/
void	ft_lstadd(t_list **alst, t_list *new);
t_list	*ft_add_link(t_list *list, void *content);
t_list	*ft_create_elem(void *content);
t_list	*ft_list_at(t_list *begin_list, unsigned int nbr);
void	ft_list_clear(t_list **begin_list);
void	ft_list_foreach(t_list *begin_list, void (*f)(void *));
t_list	*ft_list_last(t_list *begin_list);
void	ft_list_push_back(t_list **begin_list, void *content);
void	ft_list_push_front(t_list **begin_list, void *content);
t_list	*ft_list_push_params(int argc, char **argv);
void	ft_list_reverse(t_list **begin_list);
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());
size_t	ft_list_size(t_list *begin_list);
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_print_list(t_list *list);

/*
** ==>	FT_MATHS
*/
int		ft_abs(int a);

/*
** ==>	FT_MEM
*/
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *b, int c, size_t len);

/*
** ==>	FT_STR
*/
char	*ft_strcat(char *s1, const char *s2);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
char	*ft_strchr(const char *s, int c);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
int		ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strncat(char *s1, const char *s2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strncpy(char *dst, const char *src, size_t n);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
char	*ft_strnstr(const char *s1, const char *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_strsplit(char const *s, char c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strrev(char *str);
char	*ft_strstr(const char *s1, const char *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s);

/*
** ==>	FT_SAWP
*/
void	ft_swap_int(int *a, int *b);
void	ft_swap_str(char **str1, char **str2);

/*
** ==>	FT_TIME
*/
char	*ft_is_mon(int mon);
char	*ft_is_day(int day);
t_tm	*ft_localtime(const time_t *timep);

/*
** ==>	FT_WRITE
*/
void	ft_putunbr_endl_fd(size_t const i, int fd);
void	ft_putnbr_endl_fd(ssize_t const i, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putunbr_endl(size_t const i);
void	ft_putnbr_endl(ssize_t const i);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
size_t	ft_putchar_ret(char c);
void	ft_putnbr(ssize_t n);
void	ft_putnbr_pos(size_t n);
void	ft_putnbr_fd(ssize_t n, int fd);
void	ft_putnbr_pos_fd(size_t n, int fd);
void	ft_putnbr_int_pos(unsigned int n, t_var *s);
void	ft_putnbr_char_pos(unsigned char n, t_var *s);
void	ft_putnbr_short_pos(unsigned short n, t_var *s);
void	ft_putnbr_ssize_t(ssize_t n, t_var *s);
void	ft_putnbr_size_t_pos(size_t n, t_var *s);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
size_t	ft_putstr_ret(char const *s);
size_t	ft_putstr_ret_prec(char const *s, ssize_t prec);
void	ft_putwint(wint_t wint, t_var *s);
void	ft_putwchar(wchar_t wc, t_var *s);
void	ft_putwstr(wchar_t const *wstr, t_var *s);
void	ft_putwstr_prec(wchar_t const *wstr, t_var *s);
void	ft_putwstr_width(wchar_t const *wstr, t_var *s);
int		ft_puts(const char *s);
void	ft_cat(int fd);

#endif
