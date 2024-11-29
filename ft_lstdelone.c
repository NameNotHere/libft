/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstdelone.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: otanovic <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/11/29 12:50:04 by otanovic       #+#    #+#                */
/*   Updated: 2024/11/29 13:03:04 by otanovic       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
