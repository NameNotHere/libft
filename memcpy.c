/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:58:24 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/24 15:34:34 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	const unsigned char	*s;
	unsigned char		*ptr;
	size_t				i;

	i = 0;
	s = (const unsigned char *)src;
	ptr = (unsigned char *) dst;
	while (i < num)
	{
		ptr[i] = s[i];
		i++;
	}
	return (dst);
}
