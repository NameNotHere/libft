/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:57:33 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:56 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <libft.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	int			i;
	const int	length = ft_strlen(s);

	if (start > length)
		return (NULL);
	if (start + len > length)
		len = length - start;
	ret = malloc((char)len);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		ret[i] = s[i + start];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
