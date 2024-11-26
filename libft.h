/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:13:27 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/27 13:26:27 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

void	ft_putnbr_fd(int n, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putchar_fd(char c, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	*ft_memchr(const void *s, int c, size_t n);

char	*ft_itoa(int n);

char	*ft_strdup(const char *str);

char	*ft_strrchr(const char *s, int c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*strdup(const char *str);

void	*ft_calloc(size_t nmemb, size_t size);

int		ft_atoi(const char *s);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

char	*ft_strchr(const char *s, int c);

char	*ft_strjoin(char const *s1, char const *s2);

char	**ft_split(char const *s, char c);

char	*ft_strtrim(char const *s1, char const *set);

void	*ft_memcpy(void *dst, const void *src, size_t num);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

int		ft_tolower(int c);

int		ft_toupper(int c);

void	*ft_memset(void *ptr, int value, size_t num);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dst, const void *src, size_t num);

void	ft_bzero(void *s, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t num);

int		ft_isalnum(char c);

int		ft_isalpha( char c );

int		ft_isascii(char c);

int		ft_isdigit(char c);

int		ft_isprint(int c);

#endif
