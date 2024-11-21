/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:56:51 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/21 17:00:31 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const unsigned char	*p1;
	const unsigned char	*p2;

	i = 0;
	p1 = s1;
	p2 = s2;
	while (i < n )
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}

	return (0);
}
