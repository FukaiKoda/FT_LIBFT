/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habdella <habdella@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:38:04 by habdella          #+#    #+#             */
/*   Updated: 2024/10/26 10:07:57 by habdella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*list;
	t_list	*curr;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	list = NULL;
	while (curr != NULL)
	{
		new = ft_lstnew((*f)(curr->content));
		if (!new)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, new);
		curr = curr->next;
	}
	return (list);
}
