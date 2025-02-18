/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:52:41 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:52:12 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterate on a list and apply a fonction to all content of each element.
 * @brief Create a new list resulting of the application of the fonction.
 * @brief The fonction del, delete the content of a element if necessary.
 * 
 * @param lst Address to a element of the list.
 * @param f Address of the fonction to use.
 * @param del Address of the fonction to delete.
 * @return t_list*  New list or NULL if the allocation failed.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**tmp;
	t_list	*new;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	tmp = &res;
	while (lst)
	{
		new = malloc(sizeof(t_list));
		if (!new)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		new->content = f(lst->content);
		(*tmp) = new;
		tmp = &((*tmp)->next);
		lst = lst->next;
	}
	(*tmp) = NULL;
	return (res);
}
