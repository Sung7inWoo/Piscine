/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0X.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sephutsa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:37:31 by sephutsa          #+#    #+#             */
/*   Updated: 2023/01/16 15:45:00 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			if (row > 1 && row < y && col > 1 && col < x)
				ft_putchar(' ');
			else if (row == 1 && col == 1)
				ft_putchar('A');
			else if (row == y && col == x && x > 1 && y > 1)
				ft_putchar('A');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('C');
			else
				ft_putchar('B');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
