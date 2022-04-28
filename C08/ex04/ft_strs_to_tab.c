/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:50:46 by mliew             #+#    #+#             */
/*   Updated: 2022/04/28 19:04:49 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *src, char *dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*target;

	target = malloc(sizeof(src) * (ft_strlen(src) + 1));
	if (target)
		return (ft_strcpy(src, target));
	else
		return (target);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*p_str;
	int				c;

	p_str = malloc(sizeof(t_stock_str) * (ac + 1));
	if (p_str == NULL)
		return (NULL);
	c = 0;
	while (c < ac)
	{
		p_str[c].str = av[c];
		p_str[c].copy = ft_strdup(av[c]);
		p_str[c].size = ft_strlen(av[c]);
		c++;
	}
	p_str[c].str = 0;
	p_str[c].copy = 0;
	p_str[c].size = 0;
	return (p_str);
}
