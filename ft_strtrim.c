/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:43:52 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/27 14:58:02 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	get_trim_bounds(char const *s1, char const *set, int *i, int *j)
{
	*i = 0;
	*j = ft_strlen(s1) - 1;
	while (s1[*i] != '\0' && is_in_set(s1[*i], set))
		(*i)++;
	while (*j >= *i && is_in_set(s1[*j], set))
		(*j)--;
	(*j)++;
	return (*j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	j = get_trim_bounds(s1, set, &i, &j);
	c = ft_strlen(s1);
	s = (char *) malloc((j - i + 1) * sizeof(char));
	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	s = ft_substr(s1, i, (j - i));
	return (s);
}
