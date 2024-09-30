/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:05:43 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/15 10:06:50 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	number;

	number = 0;
	sign = 1;
	i = 0;
	while (str[i] == '	' || str[i] == ' ')
	{
		i ++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		number = number * 10 + str[i] - 48;
		i ++;
	}
	return (number * sign);
}
