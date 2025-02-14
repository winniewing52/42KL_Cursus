/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 16:04:07 by wng               #+#    #+#             */
/*   Updated: 2025/02/12 23:12:41 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;
	char	*str;

	last = NULL;
	str = (char *)s;
	while (*str)
	{
		if (*str == (unsigned char)c)
			last = str;
		str++;
	}
	if ((unsigned char)c == '\0')
		return (str);
	return (last);
}
