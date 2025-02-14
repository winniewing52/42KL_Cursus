/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_conversions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wng <winniewing025@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 13:44:39 by wng               #+#    #+#             */
/*   Updated: 2025/02/13 13:19:35 by wng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_format(const char format, va_list *args)
{
	if (format == 'c')
		return (print_char(va_arg(*args, int)));
	if (format == 's')
		return (print_string(va_arg(*args, char *)));
	if (format == 'p')
		return (print_pointer(va_arg(*args, void *)));
	if (format == 'd' || format == 'i')
		return (print_number(va_arg(*args, int)));
	if (format == 'u')
		return (print_unsigned(va_arg(*args, unsigned int)));
	if (format == 'x')
		return (print_hex(va_arg(*args, unsigned int), 0));
	if (format == 'X')
		return (print_hex(va_arg(*args, unsigned int), 1));
	if (format == '%')
		return (print_percent());
	return (0);
}

int	handle_conversions(const char *format, va_list *args)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			count += handle_format(format[++i], args);
		else if (format[i] != '%')
			count += write(1, &format[i], 1);
		i++;
	}
	return (count);
}
