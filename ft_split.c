/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:16:08 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/24 19:04:08 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>
/*
static int	word_count(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

int	range(int length, const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && i <= length)
		i++;
	return (i);
}

char
	**ft_split(
char const *s,
char c
)
{
	char	**s2;
	int		i;
	int		si;
	int		p;
	int		word_len;

	word_len = 0;
	p = 0;
	si = 0;
	i = 0;
	if (s[0] == '\0' || s == NULL)
		return (NULL);
	si = range(sizeof(s), s);
	s2 = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	si = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			p = 0;
			si++;
			i++;
			word_len = 0;
			while (s[i + word_len] && s[i + word_len] != c)
				word_len++;
			s2[si] = (char *)malloc(sizeof(char) * (word_len + 1));
			while (s[i] != '\0' && s[i] != c)
			{
				s2[si][p] = s[i];
				i++;
				p++;
			}
		}
		i++;
	}
	s2[si] == NULL;
	return (s2);
}*/
/*char **ft_split(char const *s, char c)
{
    char **s2;
    int i = 0;
    int si = 0;
    int word_len = 0;
    int p = 0;

    // Check for NULL input or empty string
    if (!s || s[0] == '\0')
        return NULL;

    // Allocate memory for the array of strings (words)
    s2 = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
    if (!s2)
        return NULL;

    while (s[i])
    {
        // Skip the delimiters
        if (s[i] == c)
        {
            i++;
            continue;
        }

        // Count the length of the current word
        word_len = 0;
        while (s[i + word_len] && s[i + word_len] != c)
            word_len++;

        // Allocate memory for the word
        s2[si] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!s2[si])
        {
            // Handle memory allocation failure
            while (si > 0)
                free(s2[--si]);
            free(s2);
            return NULL;
        }

        // Copy the word into the allocated space
        p = 0;
        while (p < word_len)
        {
            s2[si][p] = s[i + p];
            p++;
        }
        s2[si][p] = '\0';  // Null-terminate the word

        // Move to the next word
        i += word_len;
        si++;
    }

    // Null-terminate the array of words
    s2[si] = NULL;

    return s2;
}*/