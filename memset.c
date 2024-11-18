void *memset(void *ptr, int value, size_t num)
{
	unsigned char* p;
	unsigned char val;
	size_t i;

	i = 0;
	p = ptr;
	val = (unsigned char)value;
	while (i < num)
	{
		p[i] = val;
		i++;
	}

	return ptr;
}