/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:56:41 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/26 14:59:44 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	len;
	int	i;

	len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return ;
	while (len > i)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
