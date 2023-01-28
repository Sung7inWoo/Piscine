/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:15:48 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/24 14:50:11 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] - s2[i] != 0)
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "abcd";
	char s2[] = "abcd";
	char s3[] = "abad";
	char s4[] = "bzaz";
	printf("%d\n",ft_strcmp(s1, s2));
	printf("%d\n",ft_strcmp(s1, s3));
	printf("%d",ft_strcmp(s1, s4));
	return (0);
}*/
