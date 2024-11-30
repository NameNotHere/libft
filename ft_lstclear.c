/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanovic <otanovic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 13:04:23 by otanovic          #+#    #+#             */
/*   Updated: 2024/11/30 16:32:07 by otanovic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*nxt;

	while (*lst != NULL)
	{
		nxt = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nxt;
	}
}
