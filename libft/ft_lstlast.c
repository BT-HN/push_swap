/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 15:01:01 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 16:09:34 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Return the last element of a list.
 * 
 * @param lst Beginning of the list.
 * @return t_list* Last element of the list.
 */
t_list	*ft_lstlast(t_list *lst)
{
	size_t	count;

	count = ft_lstsize(lst);
	while (count > 1)
	{
		lst = lst->next;
		count--;
	}
	return (lst);
}
