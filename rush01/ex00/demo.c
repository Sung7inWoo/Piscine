/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 19:51:15 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/22 02:02:50 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	g_views;

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

g_views = get_tw_view(argv[1]);
g_col1up = g_views[0]; //col up
g_col2up = g_views[1];
g_col3up = g_views[2];
g_col4up = g_views[3];
g_col1down = g_views[4]; //col down
g_col2down = g_views[5];
g_col3down = g_views[6];
g_col4down = g_views[7];
g_row1left = g_views[8]; //row left
g_row2left = g_views[9];
g_row3left = g_views[10];
g_row4left = g_views[11];
g_row1right = g_views[12]; //row right
g_row2right = g_views[13];
g_row3right = g_views[14];
g_row4right = g_views[15];

int	is_solvable(void)
{
	if ((g_col1up + g_col1down > 5) || (g_col2up + g_col2down > 5)
		|| (g_col3up + g_col3down > 5) || (g_col4up + g_col4down > 5)
		|| (g_row1left + g_row1right > 5) || (g_row2left + g_row2right > 5)
		|| (g_row3left + g_row3right > 5) || (g_row4left + g_row4right > 5))
	{
		return (0);
	}
	return (1);
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
