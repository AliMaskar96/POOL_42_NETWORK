/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:54:08 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:06:16 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_character(char *charset, char c)
{
	while (*charset)
	{
		if (*charset == c)
			return (0);
		charset++;
	}
	return (1);
}

int	get_len_string(char *str, int i, char *charset)
{
	int	first;

	first = i;
	while (str[i] != '\0' && check_character(charset, str[i]))
		i++;
	return (i - first);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		len;
	int		i;
	int		j;
	int		k;

	arr = (char **)malloc(900 * sizeof(char *));
	i = 0;
	k = 0;
	while (str[k])
	{
		while (str[k] && !check_character(charset, str[k]))
			k++;
		if (!str[k])
			break ;
		len = get_len_string(str, k, charset);
		arr[i] = (char *)malloc((len + 1) * sizeof(char));
		j = 0;
		while (j < len)
			arr[i][j++] = str[k++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

// int     main(void)
// {
//     char	*str = "|1|2|3|4|5|6|7|8|9|";
//     char	*charset = " 54";
//     char	**pt;
//     int		i;
//
//     pt = ft_split(str, charset);
//     i = 0;
//     while (pt[i])
//     {
//         printf("%s\n", pt[i]);
//         i++;
//     }
//     return (0);
// }
