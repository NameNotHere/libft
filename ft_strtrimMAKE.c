/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimMAKE.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:43:52 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/25 16:08:33 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*c;
	int		i;
	int		j;
	int		len;
	int		z;

	i = 0;
	z = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && is_in_set(s1[i], set))
		i++;
	while (s1[j] != '\0')
		j++;
	while (j >= i && is_in_set(s1[j], set))
		j--;
	if (j >= i)
		len = j - i + 1;
	else
		len = 0;
	c = (char *) malloc(len + 1);
	if (c == NULL)
		return (NULL);
	while (z++ < len)
		c[z] = s1[i + z];
	c[z] = '\0';
	return (c);
} 

//CHAT TRIED FIXING THIS BY CHANGED NOTHING SO NOW I AM OCNFUSED AS WHATI S WRONG CAUSE I DIDNT COPY BUT CANT SEE