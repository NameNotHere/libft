char *strdup(const char *str)
{
	int size;
	char *dup;

	size = 0;
	while (str[size] != '\0')
		size++;
	dup = malloc(sizeof(char)*(size + 1));
	if (dup == NULL)
		return (NULL);
	size = 0;
	while (str[size] != '\0')
	{
		dup[size] = str[size];
		size++;
	}
	dup[size] = '\0';
	return	(dup);
}
