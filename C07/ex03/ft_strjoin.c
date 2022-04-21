/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 14:56:59 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:05:58 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		length;

	str = NULL;
	i = 0;
	length = 0;
	while (i < size)
		length += ft_strlen(strs[i++]);
	length = length + ((size - 1) * ft_strlen(sep));
	str = (char *)malloc(((sizeof(char) * length)));
	if (!str)
		return (NULL);
	i = 0;
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if ((i + 1) < size)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*tab[4];

	tab [0] = "J'adore";
	tab [1] = "13";
	tab [2] = "37";
	tab [3] = "!!";
	printf("%s\n", ft_strjoin(4, tab, "-"));
	return (0);
}*/
