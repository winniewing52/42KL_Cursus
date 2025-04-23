/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:27:33 by wng               #+#    #+#             */
/*   Updated: 2025/02/12 22:50:01 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	convert_num_to_str(char *str, int n, int len)
{
	int	digit;

	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		digit = (n % 10);
		if (digit < 0)
			digit = -digit;
		str[--len] = '0' + digit;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = get_num_length(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	convert_num_to_str(str, n, len);
	return (str);
}
