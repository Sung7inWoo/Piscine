/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:38:49 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/20 00:01:30 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n && src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Hello World";
	char	dest[20000];
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	printf("\n");
	ft_strncpy(&dest[0], &src[0], 12);
	printf("Source: %s\n", src);
	printf("Dest: %s\n", dest);
	return (0);
}*/
