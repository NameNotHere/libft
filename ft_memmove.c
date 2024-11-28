/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:49:36 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/26 16:24:50 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;
	unsigned char	*og;

	og = (unsigned char *)dest;
	if (dest == src || num == 0)
		return (dest);
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d < s)
		while (num--)
			*d++ = *s++;
	else
	{
		d += num;
		s += num;
		while (num--)
			*--d = *--s;
	}
	return (og);
}
