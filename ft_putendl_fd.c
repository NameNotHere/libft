/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:01:15 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/26 15:16:38 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <libft.h>

void	ft_putendl_fd(char *s, int fd)
{
	char	c;
	int		len;
	int		i;

	c = '\n';
	len = ft_strlen(s);
	i = 0;
	if (s == NULL)
		return ;
	while (len > i)
	{
		write(fd, &s[i], 1);
		i++;
	}
	i++;
	write(fd, &c, 1);
}
