/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 16:05:22 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/25 16:05:22 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

void	free_stack(t_stack **stack)
{
	t_stack *tmp;
	t_stack *current;

	if (!stack)
		return ;
	current = *stack;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*stack = NULL;
}

void	free_error(t_stack   **a)
{
	free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}

int check_rep(t_stack *a, int nbr)
{
	if (NULL == a)
		return (0);
	while (a)
	{
		if (a->number == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int	check_str(char *str_nbr)
{
	if (!(*str_nbr == '+'
			|| *str_nbr == '-'
			|| (*str_nbr >= '0' && *str_nbr <= '9')))
		return (1);
	if ((*str_nbr == '+'
			|| *str_nbr == '-')
		&& !(str_nbr[1] >= '0' && str_nbr[1] <= '9'))
		return (1);
	while (*++str_nbr)
	{
		if (!(*str_nbr >= '0' && *str_nbr <= '9'))
			return (1);
	}
	return (0);
}