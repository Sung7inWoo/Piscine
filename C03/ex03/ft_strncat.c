/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 19:52:11 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/24 22:30:36 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				len_d;

	i = 0;
	len_d = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[len_d] = src[i];
		i++;
		len_d++;
	}
	dest[len_d] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[100] = "Welcome to ";
	char s2[] = "Thailand";
	char s3[100] = "Hello";
	char s4[] = "World!";
	char s5[] = " , I'm Big.";
	char s6[100] = "Hullo";
	printf("%s\n", ft_strncat(s1,s2, 4));
	printf("%s\n", ft_strncat(s3,s4, 4));
	printf("%s\n", ft_strncat(s6,s5, 2000000000));
	return (0);
}*/
