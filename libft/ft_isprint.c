/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:08:19 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 15:24:45 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verify if the char is a printable character (ASCII 32~126).
 * 
 * @param character Character to test.
 * @return int 1 if true. 0 if false.
 */
int	ft_isprint(int character)
{
	if (character >= 32 && character <= 126)
		return (1);
	else
		return (0);
}
