/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 00:36:18 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/16 15:16:29 by jthanikp         ###   ########.fr       */
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
			if ((col == 1 && row == 1) || (col == 1 && row == y && y > 1))
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == x && x > 1))
				ft_putchar('C');
			else if ((1 < row < y && col == 1) || (1 < row < y && col == x))
				ft_putchar('B');
			else if ((row == y && 1 < col < x) || (row == 1 && 1 < col < x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
