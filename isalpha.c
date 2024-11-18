int	ft_isalpha( char c )
{
	if (c > 64 && c < 92)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	return (0);
}
