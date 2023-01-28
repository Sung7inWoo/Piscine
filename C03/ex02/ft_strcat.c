/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:35:22 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/24 14:38:31 by jthanikp         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	len_d;
	int	len_s;
	int	len_t;
	int	i;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	len_t = len_d + len_s;
	i = 0;
	while (src[i] != '\0')
	{
		while (len_d < len_t)
		{
			dest[len_d] = src[i];
			i++;
			len_d++;
		}
	}
	dest[len_d] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1[100] = "Welcome to ";
	char s2[] = "Thailand";
	char s3[100] = "Hello";
	char s4[] = "World";
	char s5[] = " , I'm Big.";
	printf("%s\n",ft_strcat(s1,s2));
	printf("%s\n",ft_strcat(s3,s4));
	printf("%s\n",ft_strcat(s3,s5));
	printf("%s\n",ft_strcat(s1,s5));
	return (0);
}*/
