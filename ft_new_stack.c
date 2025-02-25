/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:49:33 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/25 16:54:32 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	ft_new_stack(t_stack **a, char **argv)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (check_str(argv[i]))
			free_error(a);
		nbr = ft_atol(argv[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			free_error(a);
		if (check_rep(*a, (int)nbr))
			free_error(a);
		ft_append_node(a, (int)nbr);
		i++;
	}
}
