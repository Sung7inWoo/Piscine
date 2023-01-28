/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:06:12 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/25 21:26:55 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	num;

	i = 0;
	count = 0;
	num = 0;
	while (str[i] <= 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	if (!(count % 2))
		return (num);
	return (-num);
}
/*
#include <stdio.h>
int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%d", ft_atoi(av[1]));
	return (0);
}*/
