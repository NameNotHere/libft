int	atoi(const char *s)
{
	int 	i;
	int	num;
	int sign;

	sign = 1;
	i = 0;
	num = 0;
	while (s[i] == ' ')
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}

	while ((s[i] >= '0' && s[i] <= '9'))
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}

	return (num * sign);
}
