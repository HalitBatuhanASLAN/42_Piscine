/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:39:15 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/19 16:03:17 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_iterative_power(int nb, int power)
{
	long double	i;

	i = nb ;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		i *= nb;
		power --;
	}
	return (i);
}
#include<stdio.h>
int main()
{
	printf("%ld",ft_iterative_power(46342,2));
}