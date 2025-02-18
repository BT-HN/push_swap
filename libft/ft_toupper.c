/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:52:38 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:26:02 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Set the character in uppercase.
 * 
 * @param character Character to set.
 * @return int Character set to uppercase.
 */
int	ft_toupper( int character)
{
	if (character >= 97 && character <= 122)
		character = character - 32;
	return (character);
}
