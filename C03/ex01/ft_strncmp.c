/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 16:36:03 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/24 15:11:09 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((i < n) && ((s1[i] != '\0') || (s2[i] != '\0')))
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
int main(void)
{
	char s1[] = "0123456789";
	char s2[] = "012345";
	printf("%d\n", strncmp(s2,s1,7));
	printf("%d\n", ft_strncmp(s2, s1,7));
	printf("%d\n", ft_strncmp(s1, s3,100));
	printf("%d\n", ft_strncmp(s4, s1,100));
	return (0);
}*/
