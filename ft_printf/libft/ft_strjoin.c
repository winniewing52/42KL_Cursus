/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:26:07 by wng               #+#    #+#             */
/*   Updated: 2025/02/12 23:08:15 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	str1_len;
	size_t	str2_len;
	char	*result;

	if (!s1 || !s2)
		return (0);
	str1_len = ft_strlen(s1);
	str2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (str1_len + str2_len + 1));
	if (!result)
		return (0);
	ft_strlcpy(result, s1, (str1_len + 1));
	ft_strlcpy((result + str1_len), s2, (str2_len + 1));
	return (result);
}
