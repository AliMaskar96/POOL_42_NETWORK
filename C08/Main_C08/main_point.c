/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:06:18 by aait-mas          #+#    #+#             */
/*   Updated: 2022/04/21 06:21:06 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d\n%d\n", point.x, point.y);
	return (0);
}
