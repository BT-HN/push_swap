/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:55:40 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/20 15:23:46 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verify if the char is alphanumerical.
 * 
 * @param character Character to test.
 * @return int 1 if true. 0 if false.
 */
int	ft_isalnum(int character)
{
	if ((character >= 48 && character <= 57)
		|| (character >= 65 && character <= 90)
		|| (character >= 97 && character <= 122))
		return (1);
	else
		return (0);
}
