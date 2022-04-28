/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 16:00:38 by mliew             #+#    #+#             */
/*   Updated: 2022/04/27 16:18:52 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = malloc(sizeof(*array) * (max - min));
	if (array == NULL)
		return (NULL);
	else
	{
		i = -1;
		while (++i < max - min)
			array[i] = min + i;
		return (array);
	}
}

/*
#include <stdio.h>

int     *ft_range(int min, int max);

int		main(void)
{
	int i;
	int *array;
	int min;
	int max;

	min = 1;
	max = 5;
	array = ft_range(min, max);
	if (array != NULL)
	{
		i = -1;
		while (++i < max - min)
		{
			printf("%d\n", array[i]);
		}
	}
	else
		printf("error please enter min < max.\n");
}
*/