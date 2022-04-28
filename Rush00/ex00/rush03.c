/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchew <lchew@42kl.edu.my>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:23:05 by lchew             #+#    #+#             */
/*   Updated: 2022/04/09 19:09:04 by lchew            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			if (col == 1 && (row == 1 || row == y))
				ft_putchar('A');
			else if (col > 1 && col < x && row > 1 && row < y)
				ft_putchar(' ');
			else if (col == x && (row == 1 || row == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			++col;
		}
		++row;
		col = 1;
		ft_putchar('\n');
	}
}
