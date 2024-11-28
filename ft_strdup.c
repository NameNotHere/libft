/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:57:06 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/28 13:43:56 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	int		size;
	char	*dup;

	size = 0;
	while (str[size] != '\0')
		size++;
	dup = malloc(sizeof(char) * (size + 1));
	if (dup == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
	{
		dup[size] = str[size];
		size++;
	}
	dup[size] = '\0';
	return (dup);
}
