/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:00:27 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/13 10:15:34 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char	c[3];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write (1, str, 1);
		else
		{
			c[0] = '\\';
			c[1] = "0123456789abcdef"[(*str) / 16];
			c[2] = "0123456789abcdef"[(*str) % 16];
			write (1, c, 3);
		}
		str++;
	}
}
