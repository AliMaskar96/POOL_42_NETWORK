/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 18:29:38 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 05:57:53 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	tab[3];

	tab[0] = 48;
	while (tab[0] <= 55)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 56)
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= 57)
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] != 55)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
