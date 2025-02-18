/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:58:42 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 15:23:44 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verify if the char is alphabetical.
 * 
 * @param character Character to test.
 * @return int 1 if true. 0 if false.
 */
int	ft_isalpha(int character)
{
	if ((character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122))
		return (1);
	else
		return (0);
}
