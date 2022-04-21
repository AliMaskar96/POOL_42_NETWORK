/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:36:34 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:04:58 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb && i <= 46340 && nb >= 0)
	{
		i++;
	}
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", ft_sqrt(2147483647));
}*/