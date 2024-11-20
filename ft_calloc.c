void* ft_calloc(size_t num_elements, size_t size_of_element)
{
	size_t total_size = num_elements * size_of_element;
	unsigned char *c = (unsigned char *) malloc(total_size);
	size_t i;

	i = 0;
	if (c == NULL)
		return (NULL);
	while (i < total_size)
	{
		c[i] = 0;
		i++;
	}
	return ((void *)c);
}

