/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:12:01 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 15:25:38 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Set the character in lowercase.
 * 
 * @param character Character to set.
 * @return int Character set to lowercase.
 */
int	ft_tolower(int character)
{
	if (character >= 65 && character <= 90)
		character = character + 32;
	return (character);
}
