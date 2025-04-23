/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:20:23 by wng               #+#    #+#             */
/*   Updated: 2025/02/12 23:12:13 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*c1;
	char	*c2;

	i = 0;
	j = 0;
	c1 = (char *) big;
	c2 = (char *) little;
	if (little[0] == '\0')
	{
		return (c1);
	}
	while (c1[i] && i < len)
	{
		if (c1[i] == c2[0])
		{
			while (c2[j] != '\0' && c1[i + j] == c2[j] && (i + j) < len)
				j++;
			if (c2[j] == '\0')
				return ((char *)(c1 + i));
		}
		i++;
	}
	return (NULL);
}
