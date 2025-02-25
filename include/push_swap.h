/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:16:14 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/25 16:53:07 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef struct s_stack
{
	int				number; 
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

int 	check_rep(t_stack *a, int nbr);
int		check_str(char *str_nbr);
long	ft_atol(const char *str);
void	free_stack(t_stack **stack);
void	free_error(t_stack   **a);
void	ft_append_node(t_stack **stack, int nb);
void	ft_new_stack(t_stack **a, char **argv);

#endif