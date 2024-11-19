#include <stddef.h>

void *ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t i;
	unsigned char *ptr;
	const unsigned char *s;

	i = 0;
	s = (const unsigned char *)src;
	ptr = (unsigned char *) dst;
	while (i < num)
	{
		ptr[i] = s[i];
		i++;
	}

	return dst;
}
