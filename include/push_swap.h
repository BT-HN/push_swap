/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:16:14 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/18 12:31:14 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>

typedef struct s_stack
{
	int			number;
	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

long	ft_atol(const char *str);
int		ft_checkrep(t_stack *a, int nb);
void	ft_stack(int argc, char **argv);
#endif