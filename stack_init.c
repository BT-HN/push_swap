/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 12:49:33 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/18 12:32:01 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	ft_checkrep(t_stack *a, int nb)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->number == nb)
			return (1);
		a = a->next;
	}
	return (0);
}

void	ft_check(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1,argv[i],1);
		if (ft_atol(argv[i]) < -2147483648)
		{
			write(2, "Error\n", 6);
			return ;
		}
		if (ft_atol(argv[i]) > 2147483647)
		{
			write(2, "Error\n", 6);
			return ;
		}
		i++;
	}
}

t_stack	*ft_find_last_node(t_stack *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

void	ft_append_node(t_stack **stack, int nb)
{
	t_stack	*node;
	t_stack	*last_node;

	if (!stack)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->number = nb;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev = NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
	return (node);
}
void	ft_stack(int argc, char **argv)
{
	int		i;
	t_stack	*stack_a;
	t_stack	*new;

	stack_a = NULL;
	new = NULL;
	i = 1;
	while (i < argc)
	{
		new = ft_stacknew(ft_atol(argv[i]));
		ft_stackadd(&stack_a, new);
		i++;
	} 
	//push_swap(stack_a);
}
