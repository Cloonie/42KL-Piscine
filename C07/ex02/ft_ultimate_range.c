/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:14:11 by mliew             #+#    #+#             */
/*   Updated: 2022/04/26 18:24:21 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = malloc(sizeof(*array) * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			array[i] = min + i;
		*range = array;
		return (i);
	}
}

/*
#include <stdio.h>

int		main(void)
{
	int		*range;
	int		i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
	while (i < 55)
    {
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}
*/