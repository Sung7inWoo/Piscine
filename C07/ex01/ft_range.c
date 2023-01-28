/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 15:29:58 by jthanikp          #+#    #+#             */
/*   Updated: 2023/01/28 17:48:53 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*j;
	int	range;

	i = 0;
	range = max - min;
	j = malloc(range * sizeof(int));
	if (range <= 0)
		return (NULL);
	while (min < max)
	{
		j[i] = min;
		min++;
		i++;
	}
	return (j);
}
/*
int main(void)
{
	int min = -2;
	int max = 6;
	int *arr = ft_range(min,max);
	for(int j = 0; j< max - min;j++)
		printf("%d\n", arr[j]);
}*/
