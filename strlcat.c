size_t strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

	i = 0;
	j = 0;
    while (dst[i] != '\0' && i < size)
    {
        i++;
    }
    if (i == size)
    {
		i = 0;
		while (src[i] != '\0')
			i++;
        return size + i; 
    }
    while (src[j] != '\0' && i + j < size - 1)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
    while (src[j] != '\0')
    {
        j++;
    }

    return (i + j);  
}