/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 22:39:01 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/27 22:46:59 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size < 1)
		return (len_s + size);
	while (src[i] != 0 && (j < size - 1))
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[len_d] = '\0';
	if (size < len_d)
		return (size + len_s);
	else
		return (len_d + len_s);
}

short	t_strlcat(char *str1, char *str2, unsigned int n)
{
	char dest[200];
	char src[90];
	
	char dest2[200];
	char src2[90];

	strcpy(dest, str1);
	strcpy(src, str2);

	strcpy(dest2, str1);
	strcpy(src2, str2);


	unsigned int their_result = strlcat(dest, src, n);
	// printf("dest  --%s--\nsrc --%s--\n\n", dest, src);
	// printf("dest2  --%s--\nsrc2 --%s--\n\n", dest2, src2);
	unsigned int my_result = ft_strlcat(dest2, src2, n);

	
	printf("\nmine     --%u--\nexpected --%u--\n", my_result, their_result);
	printf("\nmine dest    --%s--\nexpected dest--%s--\n", dest2, dest);

	if (strcmp(dest, dest2) == 0 && their_result == my_result)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	main(void)
{
	/*char dest[100];
	char s1[] = "Hello";
	char s2[] = "World!!";
	strcpy(dest,s1);
	printf("%lu\n", strlcat(s1,s2, 8));
	printf("%u\n", ft_strlcat(s1,s2, 8));
	printf("%s", s1);
	return (0);*/
char *tests[11][2] = {
		{"asA 1234 df","La qwer"},
		{"as df","qwer"},
		{"asdf","qw er"},
		{"Asdf","Asdf"},
		{"Il etait une fois","s"},
		{"foo bar baz","bar"},
		{"AsdF","sdf"},
		{"","Asdf"},
		{"",""},
		{"asdf()& )YOGHU BKJ",""}};

	int amount[5] = {0, 10, 50, 100, 0};

	short n;
	int i;
	short res;
	short total;
	
	i = -1;
	total = 0;

	n = -1;
	while (amount[++n] || n == 0)
	{
		i = -1;
		while (*tests[++i])	
		{
			printf("\nTEST #%d   dest -->%s<--   src -->%s<-- amount %d", total++, tests[i][0], tests[i][1], amount[n]);
			res = t_strlcat(tests[i][0], tests[i][1], amount[n]);
			printf("\nres->%d  i->%d\n",res, i);
		
			if (res != 1)
			{
				printf("\nERROR with ft_strlcat\n");
				return (0);
			}
		}
	}
	printf("\n----SUCCESS with ft_strlcat----\n");

}
