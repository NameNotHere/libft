#include <stdlib.h>
#include <libft.h>

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

char	**ft_split(char const *s, char c)
{
    char	**result;
    int		i;
    int		j;
    int		start;
    int		word_len;

    if (!s)
        return (NULL);
    result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
    if (!result)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        if (s[i] == '\0')
            break;
        start = i;
        while (s[i] != '\0' && s[i] != c)
            i++;
        word_len = i - start;
        result[j] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (!result[j])
        {
            for (int k = 0; k < j; k++)
                free(result[k]);
            free(result);
            return (NULL);
        }
        ft_strlcpy(result[j], s + start, word_len + 1);
        j++;
    }
    result[j] = NULL;
    return (result);
}
