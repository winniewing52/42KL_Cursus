/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:26:45 by wng               #+#    #+#             */
/*   Updated: 2024/11/25 09:54:02 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkset(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimchar;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && checkset(set, s1[start]))
		start++;
	while (end > start && checkset(set, s1[end - 1]))
		end--;
	if (end < start)
		return (ft_strdup(""));
	trimchar = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimchar)
		return (NULL);
	ft_strlcpy(trimchar, &s1[start], end - start + 1);
	return (trimchar);
}
