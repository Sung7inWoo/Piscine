/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:05:48 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/24 17:02:56 by jthanikp         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char s1[] = "Welcome to Thailand guys";
	char s2[] = "Thaidland";
	char s3[] = "";
	char s4[] = "el";
	printf("Test1: %s\n", ft_strstr(s1, s2));
	printf("Test2: %s\n", ft_strstr(s3, s2));
	printf("Test3: %s", ft_strstr(s1, s4));
	return (0);
}*/
