size_t	strlcpy(char dst*, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (NULL);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
