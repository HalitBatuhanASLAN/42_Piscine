/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:00:49 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/21 11:21:39 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *) malloc(str_len(src) * sizeof(char) + 1);
	if (str == NULL)
		return (0);
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i ++;
	}
	str[i] = '\0';
	return (str);
}
