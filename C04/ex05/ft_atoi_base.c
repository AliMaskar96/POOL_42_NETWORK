/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:20:18 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:04:20 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	syntax_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_len(base) <= 1)
		return (0);
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
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	return (1);
}

int	index_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	k;
	int	sign;

	k = 0;
	i = 0;
	sign = 1;
	if (syntax_base(base))
	{
		while ((str[i] >= 9 && str[i] <= 13 ) || str[i] == ' ')
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				sign *= -1;
			i++;
		}
		while (str[i] && index_base(str[i], base) >= 0)
		{
			k *= ft_len(base);
			k += index_base(str[i], base);
			i++;
		}
	}
	return (k * sign);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi_base("AB", "0123456789ABCDEF"));
}*/
