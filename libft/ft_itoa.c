/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:39:35 by tbriand           #+#    #+#             */
/*   Updated: 2025/01/22 13:48:27 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	n_len_unsigned(unsigned long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

/**
 * @brief Conversion of a int to ASCII.
 * 
 * @param n Int to convert.
 * @return char* ASCII converted.
 */
char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = n_len(n);
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}

/**
 * @brief Conversion of a unsigned int to ASCII.
 * 
 * @param n Unsigned int to convert.
 * @return char* ASCII converted.
 */
char	*ft_itoa_unsigned(unsigned int n)
{
	char			*str;
	int				len;
	unsigned int	nb;

	nb = n;
	len = n_len_unsigned(n);
	str = ft_calloc(len + 1, 1);
	if (!str)
		return (NULL);
	str[len--] = '\0';
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (nb % 10) + '0';
		len--;
		nb = nb / 10;
	}
	return (str);
}
