/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:40:31 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/19 21:01:58 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[] = "1235456";
	char str2[] = "123215as";
	char str3[] = "asdfasdf";
	printf("%d", ft_str_is_numeric(str1));
	printf("%d", ft_str_is_numeric(str2));
	printf("%d", ft_str_is_numeric(str3));
	return (0);
}*/
