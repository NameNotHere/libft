/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:16:08 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/23 16:22:43 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	p = 0;
	si = 0;
	i = 0;
	while (s[si] != '\0')
		si++;
	s2 = (char **)ft_calloc(sizeof(char *) * word_count(s, c));
	si = 0;
	while (s[i] != '\0')
	{
		if (c == s[i])
		{
			while (s[i] != '\0' && s[i] != c)
				s2[si][p] = s[i];
		}
	}
}
