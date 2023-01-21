/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:07:14 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/16 15:18:56 by jthanikp         ###   ########.fr       */
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
			if ((row == 1 && col == 1) || (row == y && col == 1))
				ft_putchar('o');
			else if ((row == 1 && col == x) || (row == y && col == x))
				ft_putchar('o');
			else if ((1 < row < y && col == 1) || (1 < row < y && col == x))
				ft_putchar('|');
			else if ((row == 1 && 1 < col < y) || (row == y && 1 < col < x))
				ft_putchar('-');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
