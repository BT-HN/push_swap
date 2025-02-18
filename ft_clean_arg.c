/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbriand <tbriand@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 13:33:41 by tbriand           #+#    #+#             */
/*   Updated: 2025/02/18 11:10:48 by tbriand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

char    *ft_catarg(char *dest, char *src, int check)
{
    int        i;
    int        j;
    char    *temp;

    temp = (char *)ft_calloc(ft_strlen(dest) + ft_strlen(src) + 1, 1);
    if (!temp)
        return (NULL);
    i = 0;
    j = -1;
    while (dest && dest[i])
    {
        temp[i] = dest[i];
        i++;
    }
    temp[i] = ' ';
    while (src && src[++j])
        temp[++i] = src[j];
    if (dest && check == 1)
        free(dest);
    return (temp);
}
char **ft_clean_arg(int argc,char **argv)
{
	int		i;
	char	*tmp;
	char	**av;
	
	i = 1;
	tmp = NULL;
	av = NULL;
	tmp = ft_catarg(NULL,argv[1],);
	while(i < argc)
	{
		tmp = ft_catarg(av[i], argv[i], 1);
		i++;
	}
	if (av[0] == 0)
	{
		av = ft_split(tmp,' ');
	}
	return(av);
}