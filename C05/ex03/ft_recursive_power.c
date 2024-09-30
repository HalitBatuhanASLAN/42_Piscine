/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:34:25 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/18 20:04:39 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb ;
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
