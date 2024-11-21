/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:57:33 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/21 17:17:25 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	char	*b;

	b = malloc((char)len);
	i = 0;

	while (i <= len)
	{
		b[i] = s[i+start];
		i++;
	}
	return (b);
}
