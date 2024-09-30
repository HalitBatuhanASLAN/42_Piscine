/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 10:45:52 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/21 11:27:49 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	return (i);
}

char	*ft_str_cat(char *str, char *sep)
{
	int	i;
	int	j;

	i = 0;
	j = ft_str_len(str);
	while (sep[i])
	{
		str[j] = sep[i];
		i ++;
		j ++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strs_len ;
	int		sep_len ;
	int		i;
	char	*a;

	if (size == 0)
		return ((char *) malloc (1));
	i = 0;
	strs_len = 0;
	while (i < size)
		strs_len += ft_str_len(strs[i++]);
	sep_len = ft_str_len(sep) * (size - 1);
	a = (char *) malloc((sep_len + strs_len) * sizeof(char) + 1);
	if (a == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_str_cat(a, strs[i]);
		if (i < size - 1)
			ft_str_cat(a, sep);
		i++;
	}
	a[sep_len + strs_len] = '\0';
	return (a);
}
