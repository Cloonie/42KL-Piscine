/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:13:55 by mliew             #+#    #+#             */
/*   Updated: 2022/04/12 18:08:55 by mliew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_put3c(char a, char b, char c)
{
    ft_putchar(a);
    ft_putchar(b);
    ft_putchar(c);
    if (!(a == '7' && b == '8' && c == '9'))
    {
		write(1, ", ", 2);
    }
}

void    ft_print_comb(void)
{
    int x;
    int y;
    int z;

	x = 0;
    while (x <= 7)
    {
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				ft_put3c(x, y, z);
				z++;
			}
			y++;
		}
	x++;
	}
}
