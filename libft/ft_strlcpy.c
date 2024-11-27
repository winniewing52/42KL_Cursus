/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:51:53 by wng               #+#    #+#             */
/*   Updated: 2024/11/21 17:21:26 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	srclen;

	n = 0;
	srclen = 0;
	while (src[srclen] != '\0')
	{
		srclen++;
	}
	if (size == 0)
		return (srclen);
	while (src[n] && n < size - 1)
	{
		dst[n] = src[n];
		n++;
	}
	dst[n] = '\0';
	return (srclen);
}
