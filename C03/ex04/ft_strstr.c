/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:13:17 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:03:16 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		k = i;
		while (str[k] && to_find[j] && str[k] == to_find[j])
		{
			j++;
			k++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char str [] = "J'ADORE 1337 !!!";
	char to_find [] = "1337";
	printf("%s\n", ft_strstr(str, to_find));
}*/
