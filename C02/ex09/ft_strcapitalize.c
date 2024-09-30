/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haaslan <haaslan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 09:18:40 by haaslan           #+#    #+#             */
/*   Updated: 2023/09/13 10:35:17 by haaslan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char str)
{
	return ((str <= '9' && str >= '0')
		|| (str <= 'z' && str >= 'a')
		|| (str <= 'Z' && str >= 'A'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	newword ;

	newword = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_alphanumeric(str[i]))
		{
			if (newword == 1)
			{
				if (str[i] <= 'z' && str[i] >= 'a')
					str[i] -= 32;
				newword = 0;
			}
			else
				if (str[i] <= 'Z' && str[i] >= 'A')
					str[i] += 32;
		}
		else
			newword = 1;
		i ++;
	}
	return (str);
}
