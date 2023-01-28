/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:14:15 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 15:29:18 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		len_s;

	i = 0;
	len_s = ft_strlen(src);
	dest = malloc(len_s * sizeof(char));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main(void)
{
	char s1[] = "Hello world";
	char *s2 = strdup(s1);
	char *s3 = ft_strdup(s1);
	char s4[] = "";
	char s5[] = "Welcome to Thailand!";
	char *s6 = strdup(s4);
	char *s7 = ft_strdup(s4);
	char *s8 = strdup(s5);
	char *s9 = ft_strdup(s5);
	printf("%s\n", s2);
	printf("%s\n", s3);
	printf("%s\n", s6);
	printf("%s\n", s7);
	printf("%s\n", s8);
	printf("%s\n", s9);
	return (0);
}*/
