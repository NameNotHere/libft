/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmoveREWRITE.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:49:36 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/21 15:14:17 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void
	*ft_memmove(
			void *dest,
			const void *src,
			size_t num
			)
{
	unsigned char *d;
	unsigned char *s;
	int i;

	if (dest == src || num == 0)
	{
		return (dest);
	}
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = num;
	if (d < s)
	{
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < num)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (d);
}
