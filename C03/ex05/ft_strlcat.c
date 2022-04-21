/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:07:31 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:03:21 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	i;
	unsigned int	j;

	len_src = 0;
	len_dest = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	i = len_dest;
	j = 0;
	while (src[j] && i < (size - 1) && size != 0)
		dest[i++] = src[j++];
	dest[i] = '\0';
	if (len_dest > size)
		return (size + len_src);
	return (len_dest + len_src);
}

/*int main()
{
	char src[] = "1337 !";
	char dest1[16] = "j'adore ";
	char dest2[16] = "j'adore ";
	printf("%u\n", ft_strlcat(dest1, src, 15));
	printf("%lu\n", strlcat(dest2, src, 15));
	printf("%s\n", dest1);
	printf("%s\n", dest2);
}*/
