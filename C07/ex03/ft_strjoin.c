/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jthanikp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 00:47:00 by jthanikp          #+#    #+#             */
/*   Updated: 2023/02/03 01:28:51 by jthanikp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char    *result;
    int        i;
    int        j;
    int        k;

    result = malloc(sizeof(char));
    i = 0;
    k = 0;
    result[i] = '\0';
    while (i < size)
    {
        j = 0;
        while (strs[i][j])
            result[k++] = strs[i][j++];
        j = 0;
        while (sep[j] && i < size - 1)
            result[k++] = sep[j++];
        i++;
    }
    result[k] = '\0';
    return (result);
}
/* int main()
{
    char *strs[5];
    strs[0] = "1";
    strs[1] = "12";
    strs[2] = "123";
    strs[3] = "1234";
    strs[4] = "12345";
    printf("%s\n", ft_strjoin(5, strs, "(╯°□°)╯︵"));
} */
