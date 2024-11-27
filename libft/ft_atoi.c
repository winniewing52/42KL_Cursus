/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:22:45 by wng               #+#    #+#             */
/*   Updated: 2024/11/25 10:34:11 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	convert(const char *str, int i, int sign)
{
	long	num;
	int		digit;

	num = 0;
	digit = (str[i] - '0');
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (num > (2147483647 / 10))
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		if (num == 2147483647 / 10 && digit > 7)
		{
			if (sign == 1)
				return (2147483647);
			else
				return (-2147483648);
		}
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(num * sign));
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		i;

	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	return (convert(str, i, sign));
}
