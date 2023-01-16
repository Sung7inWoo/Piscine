/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 16:41:46 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/14 00:03:40 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_fn(int n[])
{
	write(1, &n[0], 1);
	write(1, &n[1], 1);
	write(1, " ", 1);
	write(1, &n[2], 1);
	write(1, &n[3], 1);
}

int	if_fn(int n[])
{
	if ((n[0] == 57) && (n[1] == 56))
	{
		return (1);
	}
	write(1, ", ", 2);
	return (0);
}

void	ft_print_comb2(void)
{
	int	n[4];

	n[0] = 48;
	while (n[0] < 58)
	{
		n[1] = 48;
		while (n[1] < 57)
		{
			n[2] = n[0];
			while (n[2] < 58)
			{
				n[3] = n[1] + 1;
				while (n[3] < 58)
				{
					write_fn(n);
					if_fn(n);
					n[3]++;
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}
/*
int main(void)
{
	ft_print_comb2();
}*/
