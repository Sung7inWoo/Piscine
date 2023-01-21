/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:51:15 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/22 00:20:22 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*get_tw_view(char *n)
{
	int	i;
	int	j;
	int	*ptr;

	i = 0;
	j = 0;
	ptr = malloc(16 * sizeof(int));
	while (n[i] != '\0')
	{
		if (i % 2 == 0)
		{
			ptr[j] = n[i] - '0';
			j++;
		}
		i++;
	}
	return (ptr);
}



int	main(int argc, char *argv[])
{
	int	*arr;
	arr = get_tw_view(argv[1]);
	/*int	i;
	int	row;
	int	column;
	int *ptrQ;
	int	*ptrA;

	ptrQ = malloc(4 * 4);
	ptrA = malloc(4 * 4);
	i = 0;
	while (ptrA != NULL)
	{*/
	for (int i = 0; i < 16; i++)
		printf("%d ", *(arr + i));
	return (0);
}
