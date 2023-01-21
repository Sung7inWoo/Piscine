/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:00:00 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/16 23:08:32 by sephutsa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row <= y)
	{
		col = 1;
		while (col <= x)
		{
			if (row > 1 && row < y && col < x && col > 1)
				ft_putchar(' ');
			else if (row == 1 && col == 1)
				ft_putchar('A');
			else if (row == 1 && col == x && x > 1)
				ft_putchar('A');
			else if ((col == x && y > 1 && row == y) || (row == y && col == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
