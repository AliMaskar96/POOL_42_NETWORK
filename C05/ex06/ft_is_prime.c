/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:15:12 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:05:02 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div_2;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb % i == 0 || nb < 2)
		return (0);
	i = 3;
	div_2 = nb / 2;
	while (i <= div_2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

/*int	main()
{
	printf("%d\n", ft_is_prime(7));
}*/
