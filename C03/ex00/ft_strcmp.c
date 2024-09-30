/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:55:25 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/17 15:39:30 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i ++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main()
{
	char a[] = "eneaa";
	char b[] = "enezz";

	printf("%d\n",ft_strcmp(a,b));
	printf("%d",strcmp(a,b));

}