/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 13:55:23 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 05:58:03 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	int_sign;

	if (nb < 0)
	{
		int_sign = (unsigned int)(-1 * nb);
		ft_putchar('-');
	}
	else
	{
		int_sign = (unsigned int)nb;
	}
	if (int_sign >= 10)
	{
		ft_putnbr(int_sign / 10);
		ft_putnbr(int_sign % 10);
	}
	else
		ft_putchar(int_sign + '0');
}
