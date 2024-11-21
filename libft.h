/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 17:13:27 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/21 17:17:33 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef	libft
#define	libft

void	*ft_memcpy(void *dst, const void *src, size_t num);

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	ft_tolower(int c);

int	ft_toupper(int c);

void	*ft_memset(void *ptr, int value, size_t num);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dst, const void *src, size_t num);

void	ft_bzero(void *s, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t num);

int	ft_isalnum(char c);

int	ft_isalpha( char c );

int	ft_isascii(char c);

int	ft_isdigit(char c);

int	ft_isprint(int c);

#endif
