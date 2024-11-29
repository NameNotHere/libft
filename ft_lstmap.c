/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_lstmap.c                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: otanovic <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2024/11/29 14:11:38 by otanovic       #+#    #+#                */
/*   Updated: 2024/11/29 14:40:45 by otanovic       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*new_node;
	t_list	*temp;

	if (!f || !lst)
		return (NULL);

	nlst = NULL;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		if (!nlst)
			nlst = new_node;
		else
		{
			temp = nlst;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = new_node;
		}
		lst = lst->next;
	}
	return (nlst);
}
