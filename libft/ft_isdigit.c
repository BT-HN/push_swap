/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:52:24 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 15:24:15 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verify if the char is numerical (0~9).
 * 
 * @param character Character to test.
 * @return int 1 if true. 0 if false.
 */
int	ft_isdigit(int character)
{
	if (character >= 48 && character <= 57)
		return (1);
	else
		return (0);
}
