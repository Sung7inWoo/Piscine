/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:44:03 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/13 02:28:26 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	c[2];

	c[0] = 'P';
	c[1] = 'N';
	if (n >= 0)
	{
		write(1, &c[0], 1);
	}
	else
	{
		write(1, &c[1], 1);
	}
}
/*
int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(2);
	ft_is_negative(0);
	ft_is_negative(-2);

}*/
