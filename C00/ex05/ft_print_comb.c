/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:59:10 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/13 21:58:59 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_fn(int n[]);

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = 48;
	while (n[0] < 56)
	{
		n[1] = n[0] + 1;
		while (n[1] < 57)
		{
			n[2] = n[1] + 1;
			while (n[2] < 58)
			{
				write_fn(n);
				if ((n[0] == 55) && (n[1] == 56) && (n[2] == 57))
				{
					break ;
				}
				write(1, ", ", 2);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

void	write_fn(int n[])
{
	write(1, &n[0], 1);
	write(1, &n[1], 1);
	write(1, &n[2], 1);
}
/*
int main(void)
{
	ft_print_comb();
}*/
