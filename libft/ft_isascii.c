/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:03:03 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 15:23:41 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verify if the char is an ASCII.
 * 
 * @param character Character to test.
 * @return int 1 if true. 0 if false.
 */
int	ft_isascii(int character)
{
	if (character >= 0 && character <= 127)
		return (1);
	else
		return (0);
}
