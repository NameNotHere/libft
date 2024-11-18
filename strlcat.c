size_t	strlcat(char dst*, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (size == 0)
		return (NULL);
	while (src[i] != '\0' && i < size)
	{
		dst[i] = src[i];
		i++;
	}
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
