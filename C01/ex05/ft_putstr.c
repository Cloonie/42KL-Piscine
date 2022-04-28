/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 16:11:12 by mliew             #+#    #+#             */
/*   Updated: 2022/04/13 18:19:27 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	next_char;

	while (next_char == *str)
	{
		if (next_char == '\0')
		{
			break ;
		}
		write(1, &next_char, 1);
		str++;
	}
}
