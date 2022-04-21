/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 18:19:03 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:05:45 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
		return (NULL);
	i = min;
	range = (int *)malloc(sizeof(int) * (max - min));
	if (!range)
		return (NULL);
	while (min < max)
	{
		range[min - i] = min;
		min++;
	}
	return (range);
}

/*int	main(void)
{
	int	*range;
	int	i;

	range = ft_range(5, 10);
	i = 0;
	while (i < 10 - 5)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
