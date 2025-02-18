/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 15:06:36 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/24 11:59:23 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Use to write a string.
 * 
 * @param str String to write.
 * @return int Value of the write.
 */
int	ft_putstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	return (write (1, str, ft_strlen(str)));
}
