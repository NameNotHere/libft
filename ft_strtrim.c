/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:43:52 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/25 17:24:08 by otanovic         ###   ########.fr       */
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

	// Check for NULL inputs
	if (s1 == NULL || set == NULL)
		return (malloc(1)); // Return an empty string if either is NULL

	i = 0;
	j = 0;
	z = 0;

	// Trim leading characters
	while (s1[i] != '\0' && is_in_set(s1[i], set))
		i++;

	// Find the end of the string
	while (s1[j] != '\0')
		j++;
	j--;

	// Trim trailing characters
	while (j >= i && is_in_set(s1[j], set))
		j--;

	// Calculate the length of the trimmed string
	if (j >= i)
		len = j - i + 1;
	else
		len = 0;

	// Allocate memory for the new string
	c = (char *) malloc(len + 1);
	if (c == NULL)
		return (NULL);

	// Copy the trimmed portion of the string into the result
	while (z < len)
	{
		c[z] = s1[i + z];
		z++;
	}
	c[z] = '\0';

	return (c);
}
