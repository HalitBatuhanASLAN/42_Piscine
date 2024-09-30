/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 11:14:52 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/21 11:26:45 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	i = 0;
	*range = (int *) malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min ++;
		i ++;
	}
	return (size);
}
