/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:56:45 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/26 14:51:50 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*c;
	size_t			i;
	size_t			total_size;

	total_size = nmemb * size;
	if ((nmemb * size) / size < size)
		return (NULL);
	i = 0;
	c = (unsigned char *)malloc(total_size);
	if (c == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		c[i] = 0;
		i++;
	}
	return ((void *)c);
}
