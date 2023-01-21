/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nluchaic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 01:13:50 by nluchaic          #+#    #+#             */
/*   Updated: 2023/01/16 17:43:22 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	rush( int x, int y)
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
				ft_putchar('/');
			else if (row == y && col == x && x > 1 && y > 1)
				ft_putchar('/');
			else if ((row == 1 && col == x) || (row == y && col == 1))
				ft_putchar('\\');
			else
				ft_putchar('*');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}
