/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 09:52:15 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:01:25 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				c;

	i = 0;
	c = 0;
	while (i < n)
	{
		if (src[c] != '\0')
		{
			dest[i] = src[i];
			c++;
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
