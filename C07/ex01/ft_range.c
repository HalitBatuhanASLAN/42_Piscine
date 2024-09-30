/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:21:58 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/21 11:25:35 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	i;

	if (max <= min)
		return (NULL);
	i = 0;
	a = (int *) malloc((max - min) * sizeof(int));
	while (min < max)
	{
		a[i] = min;
		i ++;
		min++;
	}
	return (a);
}
