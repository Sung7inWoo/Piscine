/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 21:14:08 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/19 22:13:03 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str1[] = "asdf\0";
	char	str2[] = "asdfm,.zxc";
	char	str3[] = "asdfjklasdfj.!3$%!\22@#?";
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	return (0);
}*/
