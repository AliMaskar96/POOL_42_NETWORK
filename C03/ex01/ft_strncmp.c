/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:36:47 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:02:51 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i != n)
		return (s1[i] - s2[i]);
	else
		return (0);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "ABCA";
	s2 = "ABC";
	printf("%d\n", ft_strncmp(s1, s2, 4));
}*/
