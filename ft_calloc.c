/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:56:45 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/24 17:46:00 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// char **ft_split(char const *s, char c)
void	*ft_calloc(size_t num_elements, size_t size_of_element)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = (unsigned char *)malloc(num_elements * size_of_element);
	if (c == NULL)
		return (NULL);
	while (i < num_elements * size_of_element)
	{
		c[i] = 0;
		i++;
	}
	return ((void *)c);
}
