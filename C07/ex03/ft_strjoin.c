/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:47:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/30 01:28:09 by jthanikp         ###   ########.fr       */
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

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total_l;
	int		i;

	if (size == 0)
	{
		result = malloc(sizeof(char));
		*result = '\0';
		return (result);
	}
	i = -1;
	total_l = 0;
	while (++i < size)
		total_l += ft_strlen(strs[i]);
	total_l += ft_strlen(sep) * (size - 1);
	i = -1;
	result = malloc(sizeof(char) * (total_l + 1));
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "Hello";
	char s2[] = "world";
	char s3[] = "Welcome";
	char s4[] = "to";
	char s5[] = "Thailand";
	char s6[] = ", ";
	char *s[] = {s1, s2, s3, s4, s5};
	printf("%s\n", ft_strjoin(5, s, s6));
	return (0);
}*/
