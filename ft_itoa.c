/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:55:11 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/25 18:55:16 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>

static int	get_num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1; // for negative sign or zero
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num; // Use long to handle INT_MIN safely

	num = n;
	len = get_num_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1)); // +1 for null terminator
	if (!str)
		return (NULL);
	str[len] = '\0'; // Null-terminate the string

	// Handle negative numbers
	if (num < 0)
	{
		if (num == INT_MIN)
		{
			str[0] = '-';
			str[1] = '2'; // Handle INT_MIN case specifically
			num = 147483648; // Set to INT_MAX equivalent
		}
		else
		{
			str[0] = '-';
			num = -num;
		}
	}
	// Fill the string with digits
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (n == 0)
		str[0] = '0';

	return (str);
}
