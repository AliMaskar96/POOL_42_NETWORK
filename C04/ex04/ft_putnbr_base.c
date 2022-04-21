/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 10:23:27 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:04:12 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	syntax_base(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		j = 0;
		while (base[i + j])
		{
			j++;
			if (base[i] == base[i + j])
				return (0);
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (i);
}

void	ft_putnbr(int nbr, unsigned int base_len, char *base)
{
	unsigned int	x;

	if (nbr < 0 )
	{
		write(1, "-", 1);
		nbr *= -1;
	}
	x = nbr;
	if (x >= base_len)
	{
		ft_putnbr(x / base_len, base_len, base);
		ft_putnbr(x % base_len, base_len, base);
	}
	else
	{
		write(1, &base[x], 1);
	}	
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;

	base_len = syntax_base(base);
	if (base_len > 1)
		ft_putnbr(nbr, base_len, base);
}

/*int	main(void)
{
	ft_putnbr_base(10, "0123456789ABCDEF");
}*/
