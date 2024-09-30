/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:07:53 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/19 10:58:13 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (result);
	while (i <= nb)
	{
		result *= i;
		i ++;
	}
	return (result);
}
