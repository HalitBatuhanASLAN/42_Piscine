/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:20:22 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/03 14:33:11 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	helpfonk(int n)
{
	n = n + 48;
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a +1;
		while (b <= 99)
		{
			helpFonk(a / 10);
			helpFonk(a % 10);
			write (1, " ", 1);
			helpFonk(b / 10);
			helpFonk(b % 10);
			write (1, ", ", 2);
			b ++ ;
		}
		a ++ ;
	}
}
