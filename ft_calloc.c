/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:56:45 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/22 11:23:39 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t size_of_element)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = (unsigned char *)malloc(num_elements * size_of_element);
	if (num_elements == 0 || size_of_element == 0)
		return (NULL);
	if (c == NULL)
		return (NULL);
	while (i < num_elements * size_of_element)
	{
		c[i] = 0;
		i++;
	}
	return ((void *)c);
}
